// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from motor_driver:msg/MotorAlarm.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "motor_driver/msg/detail/motor_alarm__functions.h"
#include "motor_driver/msg/detail/motor_alarm__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace motor_driver
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorAlarm_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motor_driver::msg::MotorAlarm(_init);
}

void MotorAlarm_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motor_driver::msg::MotorAlarm *>(message_memory);
  typed_message->~MotorAlarm();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorAlarm_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_driver::msg::MotorAlarm, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_driver::msg::MotorAlarm, level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_driver::msg::MotorAlarm, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorAlarm_message_members = {
  "motor_driver::msg",  // message namespace
  "MotorAlarm",  // message name
  3,  // number of fields
  sizeof(motor_driver::msg::MotorAlarm),
  false,  // has_any_key_member_
  MotorAlarm_message_member_array,  // message members
  MotorAlarm_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorAlarm_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorAlarm_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorAlarm_message_members,
  get_message_typesupport_handle_function,
  &motor_driver__msg__MotorAlarm__get_type_hash,
  &motor_driver__msg__MotorAlarm__get_type_description,
  &motor_driver__msg__MotorAlarm__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace motor_driver


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_driver::msg::MotorAlarm>()
{
  return &::motor_driver::msg::rosidl_typesupport_introspection_cpp::MotorAlarm_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_driver, msg, MotorAlarm)() {
  return &::motor_driver::msg::rosidl_typesupport_introspection_cpp::MotorAlarm_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
