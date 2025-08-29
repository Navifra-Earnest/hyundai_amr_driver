#pragma once

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "std_msgs/msg/float32.hpp"
#include "lifecycle_msgs/msg/state.hpp" 

#include "motor_driver/motor_controller.hpp"
#include "motor_driver/msg/motor_status.hpp"
#include "motor_driver/srv/get_diagnostics.hpp"

#include <chrono>
#include <memory>
#include <vector>
#include <string>
#include <map>

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

class MotorDriverNode : public rclcpp_lifecycle::LifecycleNode {
public:
    explicit MotorDriverNode(const rclcpp::NodeOptions & options);

protected:
    // Lifecycle 전환 콜백 함수들
    CallbackReturn on_configure(const rclcpp_lifecycle::State & previous_state) override;
    CallbackReturn on_activate(const rclcpp_lifecycle::State & previous_state) override;
    CallbackReturn on_deactivate(const rclcpp_lifecycle::State & previous_state) override;
    CallbackReturn on_cleanup(const rclcpp_lifecycle::State & previous_state) override;
    CallbackReturn on_shutdown(const rclcpp_lifecycle::State & previous_state) override;

private:
    // 주기적으로 모터 상태를 발행하는 제어 루프
    void control_loop();

    // 모터 제어 로직을 담고 있는 핵심 클래스
    std::shared_ptr<MotorController> controller_;
    std::vector<uint8_t> node_ids_;

    // ROS2 인터페이스 (Publishers, Subscribers, Service, Timer)
    std::map<uint8_t, rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr> target_vel_subs_;
    std::map<uint8_t, std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<std_msgs::msg::Float32>>> feed_vel_pubs_;
    std::map<uint8_t, std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<motor_driver::msg::MotorStatus>>> status_pubs_;
    rclcpp::Service<motor_driver::srv::GetDiagnostics>::SharedPtr diag_service_;
    rclcpp::TimerBase::SharedPtr control_timer_;
};
