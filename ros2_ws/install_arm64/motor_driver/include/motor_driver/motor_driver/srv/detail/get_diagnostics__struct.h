// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__STRUCT_H_
#define MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetDiagnostics in the package motor_driver.
typedef struct motor_driver__srv__GetDiagnostics_Request
{
  uint8_t structure_needs_at_least_one_member;
} motor_driver__srv__GetDiagnostics_Request;

// Struct for a sequence of motor_driver__srv__GetDiagnostics_Request.
typedef struct motor_driver__srv__GetDiagnostics_Request__Sequence
{
  motor_driver__srv__GetDiagnostics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_driver__srv__GetDiagnostics_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "motor_driver/msg/detail/motor_status__struct.h"
// Member 'alarms'
#include "motor_driver/msg/detail/motor_alarm__struct.h"

/// Struct defined in srv/GetDiagnostics in the package motor_driver.
typedef struct motor_driver__srv__GetDiagnostics_Response
{
  /// 요청 성공 여부
  bool success;
  /// 현재 모터 상태
  motor_driver__msg__MotorStatus status;
  /// 현재 발생한 알람 목록
  motor_driver__msg__MotorAlarm__Sequence alarms;
} motor_driver__srv__GetDiagnostics_Response;

// Struct for a sequence of motor_driver__srv__GetDiagnostics_Response.
typedef struct motor_driver__srv__GetDiagnostics_Response__Sequence
{
  motor_driver__srv__GetDiagnostics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_driver__srv__GetDiagnostics_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__STRUCT_H_
