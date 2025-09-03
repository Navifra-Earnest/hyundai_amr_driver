// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_driver:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
#define MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_

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

/// Struct defined in msg/MotorStatus in the package motor_driver.
/**
  * motor_driver/msg/MotorStatus.msg
 */
typedef struct motor_driver__msg__MotorStatus
{
  /// 타임스탬프 및 프레임 ID
  std_msgs__msg__Header header;
  /// 모터 온도 (섭씨)
  float temperature_c;
  /// 모터 전류 (암페어)
  float current_a;
  /// 상태 플래그 (비트마스크 형태)
  uint16_t status_flags;
} motor_driver__msg__MotorStatus;

// Struct for a sequence of motor_driver__msg__MotorStatus.
typedef struct motor_driver__msg__MotorStatus__Sequence
{
  motor_driver__msg__MotorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_driver__msg__MotorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_DRIVER__MSG__DETAIL__MOTOR_STATUS__STRUCT_H_
