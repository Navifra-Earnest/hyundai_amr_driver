// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice

#include "motor_driver/srv/detail/get_diagnostics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motor_driver
const rosidl_type_hash_t *
motor_driver__srv__GetDiagnostics__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe8, 0xf9, 0x92, 0x6d, 0xfe, 0x11, 0x4a, 0x1b,
      0xca, 0xbd, 0x3d, 0xd0, 0x33, 0x84, 0xd4, 0x38,
      0x78, 0x52, 0xc7, 0xa5, 0x90, 0xc4, 0x43, 0xde,
      0x01, 0x52, 0x5a, 0x0f, 0x70, 0xd5, 0x62, 0x1e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motor_driver
const rosidl_type_hash_t *
motor_driver__srv__GetDiagnostics_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0x50, 0x2b, 0x80, 0x3e, 0xf8, 0xa1, 0x92,
      0x93, 0x77, 0x7b, 0xd8, 0x29, 0xbb, 0xf8, 0x74,
      0x61, 0x70, 0x48, 0x29, 0x6a, 0x9d, 0x71, 0xa2,
      0xf4, 0x78, 0x5c, 0x3e, 0xab, 0x7d, 0xc1, 0x54,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motor_driver
const rosidl_type_hash_t *
motor_driver__srv__GetDiagnostics_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9f, 0x11, 0x81, 0x6b, 0x88, 0xf4, 0xc8, 0x41,
      0xae, 0x1b, 0x21, 0x14, 0xb4, 0x57, 0xd8, 0x7c,
      0x56, 0x57, 0xbf, 0x28, 0xb6, 0x4c, 0x18, 0x17,
      0xd1, 0x4d, 0xd7, 0xa9, 0x41, 0x6a, 0x0a, 0xe1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_motor_driver
const rosidl_type_hash_t *
motor_driver__srv__GetDiagnostics_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x73, 0x07, 0x81, 0x67, 0xf9, 0x27, 0xb5, 0x34,
      0xb8, 0x77, 0xc6, 0xe1, 0x70, 0x56, 0xd1, 0x64,
      0xa3, 0x8b, 0x43, 0x6a, 0xe9, 0x99, 0xb7, 0x62,
      0x7c, 0xb7, 0xc1, 0x3f, 0xee, 0x1d, 0x46, 0xdf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "motor_driver/msg/detail/motor_status__functions.h"
#include "motor_driver/msg/detail/motor_alarm__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t motor_driver__msg__MotorAlarm__EXPECTED_HASH = {1, {
    0x93, 0x5d, 0x80, 0xb3, 0x89, 0x29, 0xe6, 0x99,
    0xcc, 0x4d, 0x71, 0x61, 0xf1, 0x5d, 0xb6, 0xa8,
    0xf3, 0x40, 0xe2, 0xdd, 0xdd, 0xf5, 0x29, 0x29,
    0x9f, 0xd3, 0xf0, 0x45, 0x54, 0x83, 0xc8, 0x48,
  }};
static const rosidl_type_hash_t motor_driver__msg__MotorStatus__EXPECTED_HASH = {1, {
    0x88, 0x9b, 0x32, 0xb0, 0xe5, 0xa9, 0x6d, 0x96,
    0xc5, 0x38, 0xc3, 0xa2, 0xee, 0x9b, 0x27, 0x55,
    0x9c, 0xd6, 0x56, 0xbd, 0xe9, 0xcf, 0x51, 0xbd,
    0xf4, 0x83, 0xd3, 0x5a, 0x4b, 0x40, 0x31, 0xfc,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char motor_driver__srv__GetDiagnostics__TYPE_NAME[] = "motor_driver/srv/GetDiagnostics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char motor_driver__msg__MotorAlarm__TYPE_NAME[] = "motor_driver/msg/MotorAlarm";
static char motor_driver__msg__MotorStatus__TYPE_NAME[] = "motor_driver/msg/MotorStatus";
static char motor_driver__srv__GetDiagnostics_Event__TYPE_NAME[] = "motor_driver/srv/GetDiagnostics_Event";
static char motor_driver__srv__GetDiagnostics_Request__TYPE_NAME[] = "motor_driver/srv/GetDiagnostics_Request";
static char motor_driver__srv__GetDiagnostics_Response__TYPE_NAME[] = "motor_driver/srv/GetDiagnostics_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char motor_driver__srv__GetDiagnostics__FIELD_NAME__request_message[] = "request_message";
static char motor_driver__srv__GetDiagnostics__FIELD_NAME__response_message[] = "response_message";
static char motor_driver__srv__GetDiagnostics__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field motor_driver__srv__GetDiagnostics__FIELDS[] = {
  {
    {motor_driver__srv__GetDiagnostics__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motor_driver__srv__GetDiagnostics_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motor_driver__srv__GetDiagnostics_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motor_driver__srv__GetDiagnostics_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motor_driver__srv__GetDiagnostics__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motor_driver__msg__MotorAlarm__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motor_driver__msg__MotorStatus__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motor_driver__srv__GetDiagnostics__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motor_driver__srv__GetDiagnostics__TYPE_NAME, 31, 31},
      {motor_driver__srv__GetDiagnostics__FIELDS, 3, 3},
    },
    {motor_driver__srv__GetDiagnostics__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&motor_driver__msg__MotorAlarm__EXPECTED_HASH, motor_driver__msg__MotorAlarm__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = motor_driver__msg__MotorAlarm__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&motor_driver__msg__MotorStatus__EXPECTED_HASH, motor_driver__msg__MotorStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = motor_driver__msg__MotorStatus__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = motor_driver__srv__GetDiagnostics_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = motor_driver__srv__GetDiagnostics_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = motor_driver__srv__GetDiagnostics_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motor_driver__srv__GetDiagnostics_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field motor_driver__srv__GetDiagnostics_Request__FIELDS[] = {
  {
    {motor_driver__srv__GetDiagnostics_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motor_driver__srv__GetDiagnostics_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motor_driver__srv__GetDiagnostics_Request__TYPE_NAME, 39, 39},
      {motor_driver__srv__GetDiagnostics_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motor_driver__srv__GetDiagnostics_Response__FIELD_NAME__success[] = "success";
static char motor_driver__srv__GetDiagnostics_Response__FIELD_NAME__status[] = "status";
static char motor_driver__srv__GetDiagnostics_Response__FIELD_NAME__alarms[] = "alarms";

static rosidl_runtime_c__type_description__Field motor_driver__srv__GetDiagnostics_Response__FIELDS[] = {
  {
    {motor_driver__srv__GetDiagnostics_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics_Response__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {motor_driver__msg__MotorStatus__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics_Response__FIELD_NAME__alarms, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {motor_driver__msg__MotorAlarm__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motor_driver__srv__GetDiagnostics_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motor_driver__msg__MotorAlarm__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motor_driver__msg__MotorStatus__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motor_driver__srv__GetDiagnostics_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motor_driver__srv__GetDiagnostics_Response__TYPE_NAME, 40, 40},
      {motor_driver__srv__GetDiagnostics_Response__FIELDS, 3, 3},
    },
    {motor_driver__srv__GetDiagnostics_Response__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&motor_driver__msg__MotorAlarm__EXPECTED_HASH, motor_driver__msg__MotorAlarm__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = motor_driver__msg__MotorAlarm__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&motor_driver__msg__MotorStatus__EXPECTED_HASH, motor_driver__msg__MotorStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = motor_driver__msg__MotorStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char motor_driver__srv__GetDiagnostics_Event__FIELD_NAME__info[] = "info";
static char motor_driver__srv__GetDiagnostics_Event__FIELD_NAME__request[] = "request";
static char motor_driver__srv__GetDiagnostics_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field motor_driver__srv__GetDiagnostics_Event__FIELDS[] = {
  {
    {motor_driver__srv__GetDiagnostics_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {motor_driver__srv__GetDiagnostics_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {motor_driver__srv__GetDiagnostics_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motor_driver__srv__GetDiagnostics_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motor_driver__msg__MotorAlarm__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {motor_driver__msg__MotorStatus__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {motor_driver__srv__GetDiagnostics_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motor_driver__srv__GetDiagnostics_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motor_driver__srv__GetDiagnostics_Event__TYPE_NAME, 37, 37},
      {motor_driver__srv__GetDiagnostics_Event__FIELDS, 3, 3},
    },
    {motor_driver__srv__GetDiagnostics_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&motor_driver__msg__MotorAlarm__EXPECTED_HASH, motor_driver__msg__MotorAlarm__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = motor_driver__msg__MotorAlarm__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&motor_driver__msg__MotorStatus__EXPECTED_HASH, motor_driver__msg__MotorStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = motor_driver__msg__MotorStatus__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = motor_driver__srv__GetDiagnostics_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = motor_driver__srv__GetDiagnostics_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# motor_driver/srv/GetDiagnostics.srv\n"
  "\n"
  "# --- Request ---\n"
  "# \\xec\\x9a\\x94\\xec\\xb2\\xad\\xec\\x9d\\x80 \\xeb\\xb9\\x84\\xec\\x96\\xb4\\xec\\x9e\\x88\\xec\\x9d\\x8c\n"
  "\n"
  "---\n"
  "# --- Response ---\n"
  "bool success                     # \\xec\\x9a\\x94\\xec\\xb2\\xad \\xec\\x84\\xb1\\xea\\xb3\\xb5 \\xec\\x97\\xac\\xeb\\xb6\\x80\n"
  "motor_driver/MotorStatus status  # \\xed\\x98\\x84\\xec\\x9e\\xac \\xeb\\xaa\\xa8\\xed\\x84\\xb0 \\xec\\x83\\x81\\xed\\x83\\x9c\n"
  "motor_driver/MotorAlarm[] alarms # \\xed\\x98\\x84\\xec\\x9e\\xac \\xeb\\xb0\\x9c\\xec\\x83\\x9d\\xed\\x95\\x9c \\xec\\x95\\x8c\\xeb\\x9e\\x8c \\xeb\\xaa\\xa9\\xeb\\xa1\\x9d";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motor_driver__srv__GetDiagnostics__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motor_driver__srv__GetDiagnostics__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 227, 227},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motor_driver__srv__GetDiagnostics_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motor_driver__srv__GetDiagnostics_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motor_driver__srv__GetDiagnostics_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motor_driver__srv__GetDiagnostics_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
motor_driver__srv__GetDiagnostics_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motor_driver__srv__GetDiagnostics_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_driver__srv__GetDiagnostics__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motor_driver__srv__GetDiagnostics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *motor_driver__msg__MotorAlarm__get_individual_type_description_source(NULL);
    sources[3] = *motor_driver__msg__MotorStatus__get_individual_type_description_source(NULL);
    sources[4] = *motor_driver__srv__GetDiagnostics_Event__get_individual_type_description_source(NULL);
    sources[5] = *motor_driver__srv__GetDiagnostics_Request__get_individual_type_description_source(NULL);
    sources[6] = *motor_driver__srv__GetDiagnostics_Response__get_individual_type_description_source(NULL);
    sources[7] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_driver__srv__GetDiagnostics_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motor_driver__srv__GetDiagnostics_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_driver__srv__GetDiagnostics_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motor_driver__srv__GetDiagnostics_Response__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *motor_driver__msg__MotorAlarm__get_individual_type_description_source(NULL);
    sources[3] = *motor_driver__msg__MotorStatus__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_driver__srv__GetDiagnostics_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motor_driver__srv__GetDiagnostics_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *motor_driver__msg__MotorAlarm__get_individual_type_description_source(NULL);
    sources[3] = *motor_driver__msg__MotorStatus__get_individual_type_description_source(NULL);
    sources[4] = *motor_driver__srv__GetDiagnostics_Request__get_individual_type_description_source(NULL);
    sources[5] = *motor_driver__srv__GetDiagnostics_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
