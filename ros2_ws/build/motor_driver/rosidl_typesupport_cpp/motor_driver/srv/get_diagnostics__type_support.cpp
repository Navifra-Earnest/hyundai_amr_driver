// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "motor_driver/srv/detail/get_diagnostics__functions.h"
#include "motor_driver/srv/detail/get_diagnostics__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace motor_driver
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetDiagnostics_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDiagnostics_Request_type_support_ids_t;

static const _GetDiagnostics_Request_type_support_ids_t _GetDiagnostics_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_driver, srv, GetDiagnostics_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_driver, srv, GetDiagnostics_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDiagnostics_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_driver__srv__GetDiagnostics_Request__get_type_hash,
  &motor_driver__srv__GetDiagnostics_Request__get_type_description,
  &motor_driver__srv__GetDiagnostics_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motor_driver

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_driver::srv::GetDiagnostics_Request>()
{
  return &::motor_driver::srv::rosidl_typesupport_cpp::GetDiagnostics_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_driver, srv, GetDiagnostics_Request)() {
  return get_message_type_support_handle<motor_driver::srv::GetDiagnostics_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__functions.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_driver
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetDiagnostics_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDiagnostics_Response_type_support_ids_t;

static const _GetDiagnostics_Response_type_support_ids_t _GetDiagnostics_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_driver, srv, GetDiagnostics_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_driver, srv, GetDiagnostics_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDiagnostics_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_driver__srv__GetDiagnostics_Response__get_type_hash,
  &motor_driver__srv__GetDiagnostics_Response__get_type_description,
  &motor_driver__srv__GetDiagnostics_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motor_driver

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_driver::srv::GetDiagnostics_Response>()
{
  return &::motor_driver::srv::rosidl_typesupport_cpp::GetDiagnostics_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_driver, srv, GetDiagnostics_Response)() {
  return get_message_type_support_handle<motor_driver::srv::GetDiagnostics_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__functions.h"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_driver
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetDiagnostics_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDiagnostics_Event_type_support_ids_t;

static const _GetDiagnostics_Event_type_support_ids_t _GetDiagnostics_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_driver, srv, GetDiagnostics_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_driver, srv, GetDiagnostics_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDiagnostics_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_driver__srv__GetDiagnostics_Event__get_type_hash,
  &motor_driver__srv__GetDiagnostics_Event__get_type_description,
  &motor_driver__srv__GetDiagnostics_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motor_driver

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_driver::srv::GetDiagnostics_Event>()
{
  return &::motor_driver::srv::rosidl_typesupport_cpp::GetDiagnostics_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_driver, srv, GetDiagnostics_Event)() {
  return get_message_type_support_handle<motor_driver::srv::GetDiagnostics_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_driver
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetDiagnostics_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetDiagnostics_type_support_ids_t;

static const _GetDiagnostics_type_support_ids_t _GetDiagnostics_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_driver, srv, GetDiagnostics)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_driver, srv, GetDiagnostics)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetDiagnostics_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_driver::srv::GetDiagnostics_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_driver::srv::GetDiagnostics_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_driver::srv::GetDiagnostics_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<motor_driver::srv::GetDiagnostics>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<motor_driver::srv::GetDiagnostics>,
  &motor_driver__srv__GetDiagnostics__get_type_hash,
  &motor_driver__srv__GetDiagnostics__get_type_description,
  &motor_driver__srv__GetDiagnostics__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace motor_driver

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<motor_driver::srv::GetDiagnostics>()
{
  return &::motor_driver::srv::rosidl_typesupport_cpp::GetDiagnostics_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_driver, srv, GetDiagnostics)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<motor_driver::srv::GetDiagnostics>();
}

#ifdef __cplusplus
}
#endif
