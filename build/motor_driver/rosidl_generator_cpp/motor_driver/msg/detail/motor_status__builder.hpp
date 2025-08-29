// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_driver:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_driver/msg/motor_status.hpp"


#ifndef MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
#define MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_driver/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_driver
{

namespace msg
{

namespace builder
{

class Init_MotorStatus_status_flags
{
public:
  explicit Init_MotorStatus_status_flags(::motor_driver::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  ::motor_driver::msg::MotorStatus status_flags(::motor_driver::msg::MotorStatus::_status_flags_type arg)
  {
    msg_.status_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_driver::msg::MotorStatus msg_;
};

class Init_MotorStatus_current_a
{
public:
  explicit Init_MotorStatus_current_a(::motor_driver::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_status_flags current_a(::motor_driver::msg::MotorStatus::_current_a_type arg)
  {
    msg_.current_a = std::move(arg);
    return Init_MotorStatus_status_flags(msg_);
  }

private:
  ::motor_driver::msg::MotorStatus msg_;
};

class Init_MotorStatus_temperature_c
{
public:
  explicit Init_MotorStatus_temperature_c(::motor_driver::msg::MotorStatus & msg)
  : msg_(msg)
  {}
  Init_MotorStatus_current_a temperature_c(::motor_driver::msg::MotorStatus::_temperature_c_type arg)
  {
    msg_.temperature_c = std::move(arg);
    return Init_MotorStatus_current_a(msg_);
  }

private:
  ::motor_driver::msg::MotorStatus msg_;
};

class Init_MotorStatus_header
{
public:
  Init_MotorStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStatus_temperature_c header(::motor_driver::msg::MotorStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorStatus_temperature_c(msg_);
  }

private:
  ::motor_driver::msg::MotorStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_driver::msg::MotorStatus>()
{
  return motor_driver::msg::builder::Init_MotorStatus_header();
}

}  // namespace motor_driver

#endif  // MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__BUILDER_HPP_
