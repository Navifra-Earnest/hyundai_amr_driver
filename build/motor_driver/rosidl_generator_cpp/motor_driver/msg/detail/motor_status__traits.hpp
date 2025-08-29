// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_driver:msg/MotorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_driver/msg/motor_status.hpp"


#ifndef MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
#define MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_driver/msg/detail/motor_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace motor_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: temperature_c
  {
    out << "temperature_c: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_c, out);
    out << ", ";
  }

  // member: current_a
  {
    out << "current_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_a, out);
    out << ", ";
  }

  // member: status_flags
  {
    out << "status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.status_flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: temperature_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_c: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_c, out);
    out << "\n";
  }

  // member: current_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_a, out);
    out << "\n";
  }

  // member: status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.status_flags, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace motor_driver

namespace rosidl_generator_traits
{

[[deprecated("use motor_driver::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_driver::msg::MotorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const motor_driver::msg::MotorStatus & msg)
{
  return motor_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motor_driver::msg::MotorStatus>()
{
  return "motor_driver::msg::MotorStatus";
}

template<>
inline const char * name<motor_driver::msg::MotorStatus>()
{
  return "motor_driver/msg/MotorStatus";
}

template<>
struct has_fixed_size<motor_driver::msg::MotorStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<motor_driver::msg::MotorStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<motor_driver::msg::MotorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__TRAITS_HPP_
