// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_driver:msg/MotorAlarm.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__BUILDER_HPP_
#define MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_driver/msg/detail/motor_alarm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_driver
{

namespace msg
{

namespace builder
{

class Init_MotorAlarm_message
{
public:
  explicit Init_MotorAlarm_message(::motor_driver::msg::MotorAlarm & msg)
  : msg_(msg)
  {}
  ::motor_driver::msg::MotorAlarm message(::motor_driver::msg::MotorAlarm::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_driver::msg::MotorAlarm msg_;
};

class Init_MotorAlarm_error_code
{
public:
  explicit Init_MotorAlarm_error_code(::motor_driver::msg::MotorAlarm & msg)
  : msg_(msg)
  {}
  Init_MotorAlarm_message error_code(::motor_driver::msg::MotorAlarm::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_MotorAlarm_message(msg_);
  }

private:
  ::motor_driver::msg::MotorAlarm msg_;
};

class Init_MotorAlarm_header
{
public:
  Init_MotorAlarm_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorAlarm_error_code header(::motor_driver::msg::MotorAlarm::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorAlarm_error_code(msg_);
  }

private:
  ::motor_driver::msg::MotorAlarm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_driver::msg::MotorAlarm>()
{
  return motor_driver::msg::builder::Init_MotorAlarm_header();
}

}  // namespace motor_driver

#endif  // MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__BUILDER_HPP_
