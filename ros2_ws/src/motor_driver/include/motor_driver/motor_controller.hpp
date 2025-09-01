#pragma once

#include "motor_driver/can_interface.hpp"
#include "motor_driver/msg/motor_alarm.hpp"
#include "motor_driver/msg/motor_status.hpp"
#include <memory>
#include <mutex>
#include <vector>
#include <map>
#include <thread>
#include <optional>

// CAN PDO 데이터 구조체 정의
#pragma pack(1)
struct RPDO1_Data {
    uint16_t controlword;
    uint8_t modes_of_operation;
};
struct RPDO2_Data {
    int32_t target_velocity;
    int32_t target_position;
};
struct TPDO1_Data {
    uint16_t statusword;
    int8_t mode_of_operation_display;
};
struct TPDO2_Data {
    int32_t velocity_actual;
    int32_t position_actual;
};
struct TPDO3_Data {
    uint16_t dc_link_voltage;
    int16_t current_actual;
    uint16_t error_code;
};
#pragma pack()

class MotorController {
public:
    MotorController();
    ~MotorController();

    void init(const std::string& can_device, const std::vector<uint8_t>& node_ids);
    void set_target_velocity(uint8_t node_id, float rpm);
    float get_feedback_velocity(uint8_t node_id) const;
    motor_driver::msg::MotorStatus get_status(uint8_t node_id) const;
    
    // 알람 기능을 위해 수정된 함수
    std::optional<motor_driver::msg::MotorAlarm> get_alarm(uint8_t node_id);


    void enable_motor();
    void disable_motor();

private:
    struct MotorState {
        float target_velocity_rpm{0.0f};
        float feedback_velocity_rpm{0.0f};
        int32_t feedback_position{0};
        int8_t mode_of_operation_display{0};
        int16_t voltage{0};
        uint16_t error_code{0};
        motor_driver::msg::MotorStatus status;
        uint16_t last_alarm_code{0};
    };

    void can_callback(const can_frame& frame);
    void send_velocity_command(uint8_t node_id, float rpm);
    void change_motor_state(uint8_t node_id, uint16_t controlword, uint8_t mode);
    void sync_loop();
    
    std::string get_kinco_error_message(uint16_t error_code);


    std::unique_ptr<CanInterface> can_if_;
    mutable std::mutex status_mutex_;
    std::vector<uint8_t> node_ids_;
    std::map<uint8_t, MotorState> motor_states_;
    bool is_running_{false};
    std::thread sync_thread_;
};