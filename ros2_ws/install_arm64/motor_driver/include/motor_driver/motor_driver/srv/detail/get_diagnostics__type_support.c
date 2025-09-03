// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motor_driver/srv/detail/get_diagnostics__rosidl_typesupport_introspection_c.h"
#include "motor_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motor_driver/srv/detail/get_diagnostics__functions.h"
#include "motor_driver/srv/detail/get_diagnostics__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motor_driver__srv__GetDiagnostics_Request__init(message_memory);
}

void motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_fini_function(void * message_memory)
{
  motor_driver__srv__GetDiagnostics_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_driver__srv__GetDiagnostics_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_message_members = {
  "motor_driver__srv",  // message namespace
  "GetDiagnostics_Request",  // message name
  1,  // number of fields
  sizeof(motor_driver__srv__GetDiagnostics_Request),
  motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_message_member_array,  // message members
  motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_message_type_support_handle = {
  0,
  &motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics_Request)() {
  if (!motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_message_type_support_handle.typesupport_identifier) {
    motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motor_driver__srv__GetDiagnostics_Request__rosidl_typesupport_introspection_c__GetDiagnostics_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "motor_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__functions.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__struct.h"


// Include directives for member types
// Member `status`
#include "motor_driver/msg/motor_status.h"
// Member `status`
#include "motor_driver/msg/detail/motor_status__rosidl_typesupport_introspection_c.h"
// Member `alarms`
#include "motor_driver/msg/motor_alarm.h"
// Member `alarms`
#include "motor_driver/msg/detail/motor_alarm__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motor_driver__srv__GetDiagnostics_Response__init(message_memory);
}

void motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_fini_function(void * message_memory)
{
  motor_driver__srv__GetDiagnostics_Response__fini(message_memory);
}

size_t motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__size_function__GetDiagnostics_Response__alarms(
  const void * untyped_member)
{
  const motor_driver__msg__MotorAlarm__Sequence * member =
    (const motor_driver__msg__MotorAlarm__Sequence *)(untyped_member);
  return member->size;
}

const void * motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiagnostics_Response__alarms(
  const void * untyped_member, size_t index)
{
  const motor_driver__msg__MotorAlarm__Sequence * member =
    (const motor_driver__msg__MotorAlarm__Sequence *)(untyped_member);
  return &member->data[index];
}

void * motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__get_function__GetDiagnostics_Response__alarms(
  void * untyped_member, size_t index)
{
  motor_driver__msg__MotorAlarm__Sequence * member =
    (motor_driver__msg__MotorAlarm__Sequence *)(untyped_member);
  return &member->data[index];
}

void motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiagnostics_Response__alarms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const motor_driver__msg__MotorAlarm * item =
    ((const motor_driver__msg__MotorAlarm *)
    motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiagnostics_Response__alarms(untyped_member, index));
  motor_driver__msg__MotorAlarm * value =
    (motor_driver__msg__MotorAlarm *)(untyped_value);
  *value = *item;
}

void motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__assign_function__GetDiagnostics_Response__alarms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  motor_driver__msg__MotorAlarm * item =
    ((motor_driver__msg__MotorAlarm *)
    motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__get_function__GetDiagnostics_Response__alarms(untyped_member, index));
  const motor_driver__msg__MotorAlarm * value =
    (const motor_driver__msg__MotorAlarm *)(untyped_value);
  *item = *value;
}

bool motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__resize_function__GetDiagnostics_Response__alarms(
  void * untyped_member, size_t size)
{
  motor_driver__msg__MotorAlarm__Sequence * member =
    (motor_driver__msg__MotorAlarm__Sequence *)(untyped_member);
  motor_driver__msg__MotorAlarm__Sequence__fini(member);
  return motor_driver__msg__MotorAlarm__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_driver__srv__GetDiagnostics_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_driver__srv__GetDiagnostics_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alarms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_driver__srv__GetDiagnostics_Response, alarms),  // bytes offset in struct
    NULL,  // default value
    motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__size_function__GetDiagnostics_Response__alarms,  // size() function pointer
    motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__get_const_function__GetDiagnostics_Response__alarms,  // get_const(index) function pointer
    motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__get_function__GetDiagnostics_Response__alarms,  // get(index) function pointer
    motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__fetch_function__GetDiagnostics_Response__alarms,  // fetch(index, &value) function pointer
    motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__assign_function__GetDiagnostics_Response__alarms,  // assign(index, value) function pointer
    motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__resize_function__GetDiagnostics_Response__alarms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_members = {
  "motor_driver__srv",  // message namespace
  "GetDiagnostics_Response",  // message name
  3,  // number of fields
  sizeof(motor_driver__srv__GetDiagnostics_Response),
  motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_member_array,  // message members
  motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_type_support_handle = {
  0,
  &motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics_Response)() {
  motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, msg, MotorStatus)();
  motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, msg, MotorAlarm)();
  if (!motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_type_support_handle.typesupport_identifier) {
    motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motor_driver__srv__GetDiagnostics_Response__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motor_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers motor_driver__srv__detail__get_diagnostics__rosidl_typesupport_introspection_c__GetDiagnostics_service_members = {
  "motor_driver__srv",  // service namespace
  "GetDiagnostics",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // motor_driver__srv__detail__get_diagnostics__rosidl_typesupport_introspection_c__GetDiagnostics_Request_message_type_support_handle,
  NULL  // response message
  // motor_driver__srv__detail__get_diagnostics__rosidl_typesupport_introspection_c__GetDiagnostics_Response_message_type_support_handle
};

static rosidl_service_type_support_t motor_driver__srv__detail__get_diagnostics__rosidl_typesupport_introspection_c__GetDiagnostics_service_type_support_handle = {
  0,
  &motor_driver__srv__detail__get_diagnostics__rosidl_typesupport_introspection_c__GetDiagnostics_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_driver
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics)() {
  if (!motor_driver__srv__detail__get_diagnostics__rosidl_typesupport_introspection_c__GetDiagnostics_service_type_support_handle.typesupport_identifier) {
    motor_driver__srv__detail__get_diagnostics__rosidl_typesupport_introspection_c__GetDiagnostics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)motor_driver__srv__detail__get_diagnostics__rosidl_typesupport_introspection_c__GetDiagnostics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics_Response)()->data;
  }

  return &motor_driver__srv__detail__get_diagnostics__rosidl_typesupport_introspection_c__GetDiagnostics_service_type_support_handle;
}
