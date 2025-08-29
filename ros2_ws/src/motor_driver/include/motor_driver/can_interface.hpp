#pragma once

#include <linux/can.h>
#include <functional>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

/**
 * @class CanInterface
 * @brief SocketCAN을 사용한 저수준 CAN 통신을 캡슐화하는 클래스.
 */
class CanInterface {
public:
    CanInterface();
    ~CanInterface();

    bool open(const std::string& can_device);
    void close();

    /**
     * @brief CAN 프레임을 디바이스에 씁니다. (기본 함수)
     * @param msg 보낼 can_frame.
     */
    void write(const can_frame& msg);

    /**
     * @brief CAN ID와 데이터 포인터/길이를 받아 전송합니다.
     * @param can_id 전송할 CAN ID.
     * @param data 데이터 배열 포인터.
     * @param dlc 데이터 길이 (0-8).
     */
    void write(uint32_t can_id, const uint8_t* data, uint8_t dlc);
    
    /**
     * @brief CAN ID와 데이터 벡터를 받아 전송합니다.
     * @param can_id 전송할 CAN ID.
     * @param data 전송할 데이터 바이트 벡터.
     */
    void write(uint32_t can_id, const std::vector<uint8_t>& data);

    /**
     * @brief CAN ID와 8개의 데이터 바이트를 받아 전송합니다. (can_driver_base 스타일)
     * @param can_id 전송할 CAN ID.
     * @param b1~b8 전송할 8바이트 데이터.
     */
    void write(uint32_t can_id, uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, uint8_t b5, uint8_t b6, uint8_t b7, uint8_t b8);

    void register_callback(const std::function<void(const can_frame&)>& callback);

private:
    void read_loop();

    int can_fd_{-1};
    std::thread read_thread_;
    std::mutex write_mutex_;
    std::function<void(const can_frame&)> callback_{nullptr};
    bool is_running_{false};
};
