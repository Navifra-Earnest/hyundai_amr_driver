// KINCO DRIVER
#include "motor_driver/motor_controller.hpp"
#include <iostream>
#include <cstring>
#include <chrono>
#include <iomanip>
#include <sstream>

// CANopen NMT Commands
constexpr uint8_t NMT_START_REMOTE_NODE = 0x01;
constexpr uint8_t NMT_STOP_REMOTE_NODE = 0x02;
constexpr uint8_t NMT_ENTER_PRE_OPERATIONAL = 0x80;
constexpr uint8_t NMT_RESET_NODE = 0x81;
constexpr uint8_t NMT_RESET_COMMUNICATION = 0x82;

// CANopen Function Codes
constexpr uint16_t NMT_ID = 0x000;
constexpr uint16_t SYNC_ID = 0x080;
constexpr uint16_t SDO_TX_ID_BASE = 0x580;
constexpr uint16_t SDO_RX_ID_BASE = 0x600;
constexpr uint16_t TPDO1_ID_BASE = 0x180;
constexpr uint16_t RPDO1_ID_BASE = 0x200;
constexpr uint16_t TPDO2_ID_BASE = 0x280;
constexpr uint16_t RPDO2_ID_BASE = 0x300;
constexpr uint16_t TPDO3_ID_BASE = 0x380;

// CiA 402 상태 제어를 위한 Controlword 값
namespace Controlword {
    constexpr uint16_t SHUTDOWN = 0x0006;
    constexpr uint16_t SWITCH_ON = 0x0007;
    constexpr uint16_t ENABLE_OPERATION = 0x000F;
    constexpr uint16_t FAULT_RESET = 0x0080;
}

MotorController::MotorController() {}

MotorController::~MotorController() {
    is_running_ = false;
    if (sync_thread_.joinable()) {
        sync_thread_.join();
    }
    if (can_if_) {
        disable_motor();
    }
}

void MotorController::init(const std::string& can_device, const std::vector<uint8_t>& node_ids) {
    node_ids_ = node_ids;
    for (const auto& id : node_ids_) {
        motor_states_[id] = MotorState();
    }

    can_if_ = std::make_unique<CanInterface>();
    can_if_->register_callback(
        [this](const can_frame& frame) { this->can_callback(frame); });
    
    if (!can_if_->open(can_device)) {
        std::cerr << "Fatal: Failed to open CAN device " << can_device << std::endl;
        return;
    }

    for (const auto& node_id : node_ids_) {
        std::cout << "Initializing motor with Node ID: " << static_cast<int>(node_id) << std::endl;

        // 1. NMT Reset Communication
        can_if_->write(NMT_ID, {NMT_RESET_COMMUNICATION, node_id});
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); 

        // 2. RPDO1 Mapping (COB-ID: 0x200 + NodeID) , Control word, Mode of operation
        uint32_t rpdo1_cob_id_disabled = 0x80000000 | (RPDO1_ID_BASE + node_id);
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x00, 0x14, 1, rpdo1_cob_id_disabled & 0xFF, (rpdo1_cob_id_disabled >> 8) & 0xFF, (rpdo1_cob_id_disabled >> 16) & 0xFF, (rpdo1_cob_id_disabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x00, 0x14, 2, 1, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x00, 0x16, 0, 0, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x00, 0x16, 1, 0x10, 0x00, 0x40, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x60400010
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x00, 0x16, 2, 0x08, 0x00, 0x60, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x60600008
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x00, 0x16, 0, 2, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        uint32_t rpdo1_cob_id_enabled = RPDO1_ID_BASE + node_id;
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x00, 0x14, 1, rpdo1_cob_id_enabled & 0xFF, (rpdo1_cob_id_enabled >> 8) & 0xFF, (rpdo1_cob_id_enabled >> 16) & 0xFF, (rpdo1_cob_id_enabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));

        // 3. RPDO2 Mapping (COB-ID: 0x300 + NodeID) , Target velocity, Target position
        uint32_t rpdo2_cob_id_disabled = 0x80000000 | (RPDO2_ID_BASE + node_id);
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x01, 0x14, 1, rpdo2_cob_id_disabled & 0xFF, (rpdo2_cob_id_disabled >> 8) & 0xFF, (rpdo2_cob_id_disabled >> 16) & 0xFF, (rpdo2_cob_id_disabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x01, 0x14, 2, 1, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x01, 0x16, 0, 0, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x01, 0x16, 1, 0x20, 0x00, 0xFF, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x60FF0020
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x01, 0x16, 2, 0x20, 0x00, 0x7A, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x607A0020
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x01, 0x16, 0, 2, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        uint32_t rpdo2_cob_id_enabled = RPDO2_ID_BASE + node_id;
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x01, 0x14, 1, rpdo2_cob_id_enabled & 0xFF, (rpdo2_cob_id_enabled >> 8) & 0xFF, (rpdo2_cob_id_enabled >> 16) & 0xFF, (rpdo2_cob_id_enabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));

        // 4. TPDO1 Mapping (COB-ID: 0x180 + NodeID) , Status word, Mode of operation display
        uint32_t tpdo1_cob_id_disabled = 0x80000000 | (TPDO1_ID_BASE + node_id);
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x00, 0x18, 1, tpdo1_cob_id_disabled & 0xFF, (tpdo1_cob_id_disabled >> 8) & 0xFF, (tpdo1_cob_id_disabled >> 16) & 0xFF, (tpdo1_cob_id_disabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x00, 0x18, 2, 1, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x00, 0x1A, 0, 0, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x00, 0x1A, 1, 0x10, 0x00, 0x41, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x60410010
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x00, 0x1A, 2, 0x08, 0x00, 0x61, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x60610008
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x00, 0x1A, 0, 2, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        uint32_t tpdo1_cob_id_enabled = TPDO1_ID_BASE + node_id;
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x00, 0x18, 1, tpdo1_cob_id_enabled & 0xFF, (tpdo1_cob_id_enabled >> 8) & 0xFF, (tpdo1_cob_id_enabled >> 16) & 0xFF, (tpdo1_cob_id_enabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));

        // 5. TPDO2 Mapping (COB-ID: 0x280 + NodeID) , Velocity actual, Position actual
        uint32_t tpdo2_cob_id_disabled = 0x80000000 | (TPDO2_ID_BASE + node_id);
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x01, 0x18, 1, tpdo2_cob_id_disabled & 0xFF, (tpdo2_cob_id_disabled >> 8) & 0xFF, (tpdo2_cob_id_disabled >> 16) & 0xFF, (tpdo2_cob_id_disabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x01, 0x18, 2, 1, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x01, 0x1A, 0, 0, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x01, 0x1A, 1, 0x20, 0x00, 0x6C, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x606C0020
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x01, 0x1A, 2, 0x20, 0x00, 0x64, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x60640020
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x01, 0x1A, 0, 2, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        uint32_t tpdo2_cob_id_enabled = TPDO2_ID_BASE + node_id;
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x01, 0x18, 1, tpdo2_cob_id_enabled & 0xFF, (tpdo2_cob_id_enabled >> 8) & 0xFF, (tpdo2_cob_id_enabled >> 16) & 0xFF, (tpdo2_cob_id_enabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));

        // 6. TPDO3 Mapping (COB-ID: 0x380 + NodeID) , DC link voltage, Current actual, Error code
        uint32_t tpdo3_cob_id_disabled = 0x80000000 | (TPDO3_ID_BASE + node_id);
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x02, 0x18, 1, tpdo3_cob_id_disabled & 0xFF, (tpdo3_cob_id_disabled >> 8) & 0xFF, (tpdo3_cob_id_disabled >> 16) & 0xFF, (tpdo3_cob_id_disabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x02, 0x18, 2, 1, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x02, 0x1A, 0, 0, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x02, 0x1A, 1, 0x10, 0x00, 0x79, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x60790020 
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x02, 0x1A, 2, 0x10, 0x00, 0x78, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x60780010
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x02, 0x1A, 3, 0x10, 0x00, 0x3F, 0x60); std::this_thread::sleep_for(std::chrono::milliseconds(20)); // 0x603F0010
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x2F, 0x02, 0x1A, 0, 3, 0, 0, 0); std::this_thread::sleep_for(std::chrono::milliseconds(20));
        uint32_t tpdo3_cob_id_enabled = TPDO3_ID_BASE + node_id;
        can_if_->write(SDO_RX_ID_BASE + node_id, 0x23, 0x02, 0x18, 1, tpdo3_cob_id_enabled & 0xFF, (tpdo3_cob_id_enabled >> 8) & 0xFF, (tpdo3_cob_id_enabled >> 16) & 0xFF, (tpdo3_cob_id_enabled >> 24) & 0xFF); std::this_thread::sleep_for(std::chrono::milliseconds(20));

        // 7. Start Node
        can_if_->write(NMT_ID, {NMT_START_REMOTE_NODE, node_id});
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        
        std::cout << "Motor with Node ID " << static_cast<int>(node_id) << " initialized." << std::endl;
    }

    is_running_ = true;
    sync_thread_ = std::thread(&MotorController::sync_loop, this);
}

void MotorController::sync_loop() {
    while (is_running_) {
        if (can_if_) {
            can_if_->write(SYNC_ID, nullptr, 0);
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // 20Hz
    }
}

void MotorController::set_target_velocity(uint8_t node_id, float rpm) {
    std::lock_guard<std::mutex> lock(status_mutex_);
    if (motor_states_.count(node_id)) {
        motor_states_[node_id].target_velocity_rpm = rpm;
        send_velocity_command(node_id, rpm);
    }
}

void MotorController::send_velocity_command(uint8_t node_id, float rpm) {
    RPDO2_Data pdo_data;
    pdo_data.target_velocity = static_cast<int32_t>(rpm * 64000 / 60.0); // RPM to pps
    pdo_data.target_position = 0;

    if (can_if_) {
        can_if_->write(RPDO2_ID_BASE + node_id, reinterpret_cast<uint8_t*>(&pdo_data), sizeof(pdo_data));
    }
}

void MotorController::change_motor_state(uint8_t node_id, uint16_t controlword, uint8_t mode) {
    RPDO1_Data pdo_data;
    pdo_data.controlword = controlword;
    pdo_data.modes_of_operation = mode;
    
    if (can_if_) {
        can_if_->write(RPDO1_ID_BASE + node_id, reinterpret_cast<uint8_t*>(&pdo_data), sizeof(pdo_data));
    }
}

void MotorController::enable_motor() {
    for (const auto& node_id : node_ids_) {
        uint8_t velocity_mode = 3; // Profile Velocity Mode
        change_motor_state(node_id, Controlword::SHUTDOWN, velocity_mode);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        change_motor_state(node_id, Controlword::SWITCH_ON, velocity_mode);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        change_motor_state(node_id, Controlword::ENABLE_OPERATION, velocity_mode);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << "Motor with Node ID " << static_cast<int>(node_id) << " enabled (Servo ON)." << std::endl;
    }
}

void MotorController::disable_motor() {
    std::cout << "Disabling all motors..." << std::endl;
    for (const auto& node_id : node_ids_) {
        change_motor_state(node_id, Controlword::SHUTDOWN, 3);
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        std::cout << "Motor with Node ID " << static_cast<int>(node_id) << " disabled (Servo OFF)." << std::endl;
    }
}

std::string MotorController::get_kinco_error_message(uint16_t error_code) {
    // Kinco Low-Voltage User Manual2020.pdf (p.94 ~ p.99) || (p.67 ~ p.68)
    // 문서를 보니 오타가 몇몇 존재, 예를들어 0x5112 -> 0x5122, 따라서 에러메세지는 정확하지 않을 수 있음
    switch (error_code) {
        // Error_State 1 
        case 0x7380: return "Encoder ABZ signal incorrect";
        case 0x7381: return "Encoder UVW signal incorrect";
        case 0x7306: return "Encoder count wrong";
        case 0x4210: return "Controller Temperature";
        case 0x3210: return "Overvoltage";
        case 0x3220: return "Undervoltage";
        case 0x2320: return "Short circuit of driver output";
        case 0x7110: return "Driver brake resistor is abnormal";
        case 0x8611: return "Following error";
        case 0x5112: return "Low logic voltage";
        case 0x2350: return "Motor or controller IIt (Overload)";
        case 0x8A80: return "Over input frequency";
        case 0x4310: return "Motor temperature";
        case 0x7122: return "Motor excitation";
        case 0x6310: return "EEPROM data";

        // Error_State 2 (extended)
        case 0x5210: return "Current sensor error";
        case 0x6010: return "Watchdog error";
        case 0x6011: return "Wrong interrupt";
        case 0x7400: return "MCU ID error";
        case 0x6320: return "Motor configuration error";
        case 0x5443: return "External enable error";
        case 0x5442: return "Positive limit error";
        case 0x5441: return "Negative limit error";
        case 0x6012: return "SPI internal error";
        case 0x8A81: return "Close loop direction error";

        case 0x0000: return "No error";
        default:     return "Unknown error code";
    }
}

std::optional<motor_driver::msg::MotorAlarm> MotorController::get_alarm(uint8_t node_id) {
    std::lock_guard<std::mutex> lock(status_mutex_);
    if (motor_states_.count(node_id)) {
        auto& state = motor_states_.at(node_id);
        
        // 새로운 에러 코드가 감지되었을 경우에만 알람 메시지 생성
        if (state.error_code != 0 && state.error_code != state.last_alarm_code) {
            state.last_alarm_code = state.error_code;
            motor_driver::msg::MotorAlarm alarm_msg;
            alarm_msg.error_code = state.error_code;
            
            std::stringstream ss;
            ss << "[" << std::to_string(node_id) << "] " << get_kinco_error_message(state.error_code) 
               << " (0x" << std::hex << std::uppercase << std::setw(4) << std::setfill('0') << state.error_code << ")";
            alarm_msg.message = ss.str();
            
            return alarm_msg;
        }
        // 에러가 해결되면(0x0000) last_alarm_code 초기화하고 정보 메시지 발행
        else if (state.error_code == 0 && state.last_alarm_code != 0) {
            motor_driver::msg::MotorAlarm alarm_msg;
            alarm_msg.error_code = 0;
            
            std::stringstream ss;
            ss << "[" << std::to_string(node_id) << "] Error resolved. (Previous: 0x" 
               << std::hex << std::uppercase << std::setw(4) << std::setfill('0') << state.last_alarm_code << ")";
            alarm_msg.message = ss.str();

            state.last_alarm_code = 0; // 초기화
            return alarm_msg;
        }
    }
    return std::nullopt; // 알람 없음
}

void MotorController::can_callback(const can_frame& frame) {
    uint8_t node_id = frame.can_id & 0x7F;
    uint16_t function_code = frame.can_id & 0xFF80;

    if (motor_states_.find(node_id) == motor_states_.end()) {
        return;
    }

    std::lock_guard<std::mutex> lock(status_mutex_);

    if (function_code == SDO_TX_ID_BASE) {
        if (frame.data[0] == 0x80) {
            std::cerr << "SDO Write Error received for Node ID " << static_cast<int>(node_id) << std::endl;
        }
    }
    else if (function_code == TPDO1_ID_BASE) {
        if (frame.can_dlc >= sizeof(TPDO1_Data)) {
            TPDO1_Data pdo_data;
            memcpy(&pdo_data, frame.data, sizeof(pdo_data));
            motor_states_[node_id].status.status_flags = pdo_data.statusword;
            motor_states_[node_id].mode_of_operation_display = pdo_data.mode_of_operation_display;
        }
    }
    else if (function_code == TPDO2_ID_BASE) {
        if (frame.can_dlc >= sizeof(TPDO2_Data)) {
            TPDO2_Data pdo_data;
            memcpy(&pdo_data, frame.data, sizeof(pdo_data));
            motor_states_[node_id].feedback_velocity_rpm = static_cast<float>(pdo_data.velocity_actual);
            motor_states_[node_id].feedback_position = pdo_data.position_actual;
        }
    }
    else if (function_code == TPDO3_ID_BASE) {
        if (frame.can_dlc >= sizeof(TPDO3_Data)) {
            TPDO3_Data pdo_data;
            memcpy(&pdo_data, frame.data, sizeof(pdo_data));
            motor_states_[node_id].voltage = pdo_data.dc_link_voltage;
            motor_states_[node_id].status.current_a = static_cast<float>(pdo_data.current_actual);
            motor_states_[node_id].error_code = pdo_data.error_code;
        }
    }
}


float MotorController::get_feedback_velocity(uint8_t node_id) const {
    std::lock_guard<std::mutex> lock(status_mutex_);
    if (motor_states_.count(node_id)) {
        // RPM 단위로 변환, kinco는 pps 단위로 피드백
        return motor_states_.at(node_id).feedback_velocity_rpm * 60.0 / 64000.0;
    }
    return 0.0f;
}

motor_driver::msg::MotorStatus MotorController::get_status(uint8_t node_id) const {
    std::lock_guard<std::mutex> lock(status_mutex_);
    if (motor_states_.count(node_id)) {
        auto& state = motor_states_.at(node_id);
        auto ros_status = state.status;
        ros_status.current_a = state.status.current_a;
        return ros_status;
    }
    return motor_driver::msg::MotorStatus();
}

