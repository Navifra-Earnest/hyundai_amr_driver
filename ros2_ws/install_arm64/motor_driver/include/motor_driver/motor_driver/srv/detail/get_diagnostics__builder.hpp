// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__BUILDER_HPP_
#define MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_driver/srv/detail/get_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_driver
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_driver::srv::GetDiagnostics_Request>()
{
  return ::motor_driver::srv::GetDiagnostics_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace motor_driver


namespace motor_driver
{

namespace srv
{

namespace builder
{

class Init_GetDiagnostics_Response_alarms
{
public:
  explicit Init_GetDiagnostics_Response_alarms(::motor_driver::srv::GetDiagnostics_Response & msg)
  : msg_(msg)
  {}
  ::motor_driver::srv::GetDiagnostics_Response alarms(::motor_driver::srv::GetDiagnostics_Response::_alarms_type arg)
  {
    msg_.alarms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_driver::srv::GetDiagnostics_Response msg_;
};

class Init_GetDiagnostics_Response_status
{
public:
  explicit Init_GetDiagnostics_Response_status(::motor_driver::srv::GetDiagnostics_Response & msg)
  : msg_(msg)
  {}
  Init_GetDiagnostics_Response_alarms status(::motor_driver::srv::GetDiagnostics_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetDiagnostics_Response_alarms(msg_);
  }

private:
  ::motor_driver::srv::GetDiagnostics_Response msg_;
};

class Init_GetDiagnostics_Response_success
{
public:
  Init_GetDiagnostics_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDiagnostics_Response_status success(::motor_driver::srv::GetDiagnostics_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetDiagnostics_Response_status(msg_);
  }

private:
  ::motor_driver::srv::GetDiagnostics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_driver::srv::GetDiagnostics_Response>()
{
  return motor_driver::srv::builder::Init_GetDiagnostics_Response_success();
}

}  // namespace motor_driver

#endif  // MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__BUILDER_HPP_
