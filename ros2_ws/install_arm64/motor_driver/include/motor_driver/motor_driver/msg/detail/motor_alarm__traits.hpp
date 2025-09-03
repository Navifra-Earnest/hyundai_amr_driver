// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_driver:msg/MotorAlarm.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__TRAITS_HPP_
#define MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_driver/msg/detail/motor_alarm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace motor_driver
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorAlarm & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorAlarm & msg,
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

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorAlarm & msg, bool use_flow_style = false)
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
  const motor_driver::msg::MotorAlarm & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_driver::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_driver::msg::to_yaml() instead")]]
inline std::string to_yaml(const motor_driver::msg::MotorAlarm & msg)
{
  return motor_driver::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motor_driver::msg::MotorAlarm>()
{
  return "motor_driver::msg::MotorAlarm";
}

template<>
inline const char * name<motor_driver::msg::MotorAlarm>()
{
  return "motor_driver/msg/MotorAlarm";
}

template<>
struct has_fixed_size<motor_driver::msg::MotorAlarm>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motor_driver::msg::MotorAlarm>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motor_driver::msg::MotorAlarm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__TRAITS_HPP_
