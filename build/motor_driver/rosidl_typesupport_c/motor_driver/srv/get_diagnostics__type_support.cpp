// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "motor_driver/srv/detail/get_diagnostics__struct.h"
#include "motor_driver/srv/detail/get_diagnostics__type_support.h"
#include "motor_driver/srv/detail/get_diagnostics__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace motor_driver
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetDiagnostics_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDiagnostics_Request_type_support_ids_t;

static const _GetDiagnostics_Request_type_support_ids_t _GetDiagnostics_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetDiagnostics_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDiagnostics_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDiagnostics_Request_type_support_symbol_names_t _GetDiagnostics_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_driver, srv, GetDiagnostics_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics_Request)),
  }
};

typedef struct _GetDiagnostics_Request_type_support_data_t
{
  void * data[2];
} _GetDiagnostics_Request_type_support_data_t;

static _GetDiagnostics_Request_type_support_data_t _GetDiagnostics_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDiagnostics_Request_message_typesupport_map = {
  2,
  "motor_driver",
  &_GetDiagnostics_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetDiagnostics_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetDiagnostics_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetDiagnostics_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDiagnostics_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &motor_driver__srv__GetDiagnostics_Request__get_type_hash,
  &motor_driver__srv__GetDiagnostics_Request__get_type_description,
  &motor_driver__srv__GetDiagnostics_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace motor_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_driver, srv, GetDiagnostics_Request)() {
  return &::motor_driver::srv::rosidl_typesupport_c::GetDiagnostics_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__struct.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__type_support.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_driver
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetDiagnostics_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDiagnostics_Response_type_support_ids_t;

static const _GetDiagnostics_Response_type_support_ids_t _GetDiagnostics_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetDiagnostics_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDiagnostics_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDiagnostics_Response_type_support_symbol_names_t _GetDiagnostics_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_driver, srv, GetDiagnostics_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics_Response)),
  }
};

typedef struct _GetDiagnostics_Response_type_support_data_t
{
  void * data[2];
} _GetDiagnostics_Response_type_support_data_t;

static _GetDiagnostics_Response_type_support_data_t _GetDiagnostics_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDiagnostics_Response_message_typesupport_map = {
  2,
  "motor_driver",
  &_GetDiagnostics_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetDiagnostics_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetDiagnostics_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetDiagnostics_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDiagnostics_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &motor_driver__srv__GetDiagnostics_Response__get_type_hash,
  &motor_driver__srv__GetDiagnostics_Response__get_type_description,
  &motor_driver__srv__GetDiagnostics_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace motor_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_driver, srv, GetDiagnostics_Response)() {
  return &::motor_driver::srv::rosidl_typesupport_c::GetDiagnostics_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__struct.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__type_support.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_driver
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetDiagnostics_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDiagnostics_Event_type_support_ids_t;

static const _GetDiagnostics_Event_type_support_ids_t _GetDiagnostics_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetDiagnostics_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDiagnostics_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDiagnostics_Event_type_support_symbol_names_t _GetDiagnostics_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_driver, srv, GetDiagnostics_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics_Event)),
  }
};

typedef struct _GetDiagnostics_Event_type_support_data_t
{
  void * data[2];
} _GetDiagnostics_Event_type_support_data_t;

static _GetDiagnostics_Event_type_support_data_t _GetDiagnostics_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDiagnostics_Event_message_typesupport_map = {
  2,
  "motor_driver",
  &_GetDiagnostics_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetDiagnostics_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetDiagnostics_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetDiagnostics_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDiagnostics_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &motor_driver__srv__GetDiagnostics_Event__get_type_hash,
  &motor_driver__srv__GetDiagnostics_Event__get_type_description,
  &motor_driver__srv__GetDiagnostics_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace motor_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, motor_driver, srv, GetDiagnostics_Event)() {
  return &::motor_driver::srv::rosidl_typesupport_c::GetDiagnostics_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace motor_driver
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GetDiagnostics_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDiagnostics_type_support_ids_t;

static const _GetDiagnostics_type_support_ids_t _GetDiagnostics_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetDiagnostics_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetDiagnostics_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetDiagnostics_type_support_symbol_names_t _GetDiagnostics_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_driver, srv, GetDiagnostics)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_driver, srv, GetDiagnostics)),
  }
};

typedef struct _GetDiagnostics_type_support_data_t
{
  void * data[2];
} _GetDiagnostics_type_support_data_t;

static _GetDiagnostics_type_support_data_t _GetDiagnostics_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetDiagnostics_service_typesupport_map = {
  2,
  "motor_driver",
  &_GetDiagnostics_service_typesupport_ids.typesupport_identifier[0],
  &_GetDiagnostics_service_typesupport_symbol_names.symbol_name[0],
  &_GetDiagnostics_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetDiagnostics_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDiagnostics_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GetDiagnostics_Request_message_type_support_handle,
  &GetDiagnostics_Response_message_type_support_handle,
  &GetDiagnostics_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    motor_driver,
    srv,
    GetDiagnostics
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    motor_driver,
    srv,
    GetDiagnostics
  ),
  &motor_driver__srv__GetDiagnostics__get_type_hash,
  &motor_driver__srv__GetDiagnostics__get_type_description,
  &motor_driver__srv__GetDiagnostics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace motor_driver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, motor_driver, srv, GetDiagnostics)() {
  return &::motor_driver::srv::rosidl_typesupport_c::GetDiagnostics_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
