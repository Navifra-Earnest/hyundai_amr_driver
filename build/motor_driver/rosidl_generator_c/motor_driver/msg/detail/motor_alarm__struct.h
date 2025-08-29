// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_driver:msg/MotorAlarm.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_driver/msg/motor_alarm.h"


#ifndef MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__STRUCT_H_
#define MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorAlarm in the package motor_driver.
/**
  * motor_driver/msg/MotorAlarm.msg
 */
typedef struct motor_driver__msg__MotorAlarm
{
  std_msgs__msg__Header header;
  /// 0: Info, 1: Warning, 2: Error, 3: Critical
  uint8_t level;
  /// 알람/에러 내용
  rosidl_runtime_c__String message;
} motor_driver__msg__MotorAlarm;

// Struct for a sequence of motor_driver__msg__MotorAlarm.
typedef struct motor_driver__msg__MotorAlarm__Sequence
{
  motor_driver__msg__MotorAlarm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_driver__msg__MotorAlarm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_DRIVER__MSG__DETAIL__MOTOR_ALARM__STRUCT_H_
