// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__TRAITS_HPP_
#define MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_driver/srv/detail/get_diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motor_driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDiagnostics_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDiagnostics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDiagnostics_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace motor_driver

namespace rosidl_generator_traits
{

[[deprecated("use motor_driver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_driver::srv::GetDiagnostics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const motor_driver::srv::GetDiagnostics_Request & msg)
{
  return motor_driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motor_driver::srv::GetDiagnostics_Request>()
{
  return "motor_driver::srv::GetDiagnostics_Request";
}

template<>
inline const char * name<motor_driver::srv::GetDiagnostics_Request>()
{
  return "motor_driver/srv/GetDiagnostics_Request";
}

template<>
struct has_fixed_size<motor_driver::srv::GetDiagnostics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_driver::srv::GetDiagnostics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_driver::srv::GetDiagnostics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "motor_driver/msg/detail/motor_status__traits.hpp"
// Member 'alarms'
#include "motor_driver/msg/detail/motor_alarm__traits.hpp"

namespace motor_driver
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDiagnostics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: alarms
  {
    if (msg.alarms.size() == 0) {
      out << "alarms: []";
    } else {
      out << "alarms: [";
      size_t pending_items = msg.alarms.size();
      for (auto item : msg.alarms) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDiagnostics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: alarms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.alarms.size() == 0) {
      out << "alarms: []\n";
    } else {
      out << "alarms:\n";
      for (auto item : msg.alarms) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDiagnostics_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace motor_driver

namespace rosidl_generator_traits
{

[[deprecated("use motor_driver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_driver::srv::GetDiagnostics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_driver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_driver::srv::to_yaml() instead")]]
inline std::string to_yaml(const motor_driver::srv::GetDiagnostics_Response & msg)
{
  return motor_driver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<motor_driver::srv::GetDiagnostics_Response>()
{
  return "motor_driver::srv::GetDiagnostics_Response";
}

template<>
inline const char * name<motor_driver::srv::GetDiagnostics_Response>()
{
  return "motor_driver/srv/GetDiagnostics_Response";
}

template<>
struct has_fixed_size<motor_driver::srv::GetDiagnostics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motor_driver::srv::GetDiagnostics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motor_driver::srv::GetDiagnostics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<motor_driver::srv::GetDiagnostics>()
{
  return "motor_driver::srv::GetDiagnostics";
}

template<>
inline const char * name<motor_driver::srv::GetDiagnostics>()
{
  return "motor_driver/srv/GetDiagnostics";
}

template<>
struct has_fixed_size<motor_driver::srv::GetDiagnostics>
  : std::integral_constant<
    bool,
    has_fixed_size<motor_driver::srv::GetDiagnostics_Request>::value &&
    has_fixed_size<motor_driver::srv::GetDiagnostics_Response>::value
  >
{
};

template<>
struct has_bounded_size<motor_driver::srv::GetDiagnostics>
  : std::integral_constant<
    bool,
    has_bounded_size<motor_driver::srv::GetDiagnostics_Request>::value &&
    has_bounded_size<motor_driver::srv::GetDiagnostics_Response>::value
  >
{
};

template<>
struct is_service<motor_driver::srv::GetDiagnostics>
  : std::true_type
{
};

template<>
struct is_service_request<motor_driver::srv::GetDiagnostics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<motor_driver::srv::GetDiagnostics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__TRAITS_HPP_
