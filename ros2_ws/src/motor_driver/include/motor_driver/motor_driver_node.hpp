#pragma once

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "std_msgs/msg/float32.hpp"
#include "lifecycle_msgs/msg/state.hpp"

#include "motor_driver/motor_controller.hpp"
#include "motor_driver/msg/motor_status.hpp"
#include "motor_driver/msg/motor_alarm.hpp" 
#include "motor_driver/srv/get_diagnostics.hpp"

#include <memory>
#include <vector>
#include <string>
#include <map>

using rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface;
using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

class MotorDriverNode : public rclcpp_lifecycle::LifecycleNode {
public:
    explicit MotorDriverNode(const rclcpp::NodeOptions & options);

protected:
    CallbackReturn on_configure(const rclcpp_lifecycle::State &) override;
    CallbackReturn on_activate(const rclcpp_lifecycle::State &) override;
    CallbackReturn on_deactivate(const rclcpp_lifecycle::State &) override;
    CallbackReturn on_cleanup(const rclcpp_lifecycle::State &) override;
    CallbackReturn on_shutdown(const rclcpp_lifecycle::State &) override;

private:
    void control_loop();

    std::shared_ptr<MotorController> controller_;
    std::vector<uint8_t> node_ids_;

    std::map<uint8_t, rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr> target_vel_subs_;
    std::map<uint8_t, std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<std_msgs::msg::Float32>>> feed_vel_pubs_;
    std::map<uint8_t, std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<motor_driver::msg::MotorStatus>>> status_pubs_;
    
    std::shared_ptr<rclcpp_lifecycle::LifecyclePublisher<motor_driver::msg::MotorAlarm>> alarm_pub_;

    rclcpp::Service<motor_driver::srv::GetDiagnostics>::SharedPtr diag_service_;
    rclcpp::TimerBase::SharedPtr control_timer_;
};