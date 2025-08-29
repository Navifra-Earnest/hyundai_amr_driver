// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motor_driver:msg/MotorStatus.idl
// generated code does not contain a copyright notice

#include "motor_driver/msg/detail/motor_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motor_driver
const rosidl_type_hash_t *
motor_driver__msg__MotorStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0x9b, 0x32, 0xb0, 0xe5, 0xa9, 0x6d, 0x96,
      0xc5, 0x38, 0xc3, 0xa2, 0xee, 0x9b, 0x27, 0x55,
      0x9c, 0xd6, 0x56, 0xbd, 0xe9, 0xcf, 0x51, 0xbd,
      0xf4, 0x83, 0xd3, 0x5a, 0x4b, 0x40, 0x31, 0xfc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char motor_driver__msg__MotorStatus__TYPE_NAME[] = "motor_driver/msg/MotorStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char motor_driver__msg__MotorStatus__FIELD_NAME__header[] = "header";
static char motor_driver__msg__MotorStatus__FIELD_NAME__temperature_c[] = "temperature_c";
static char motor_driver__msg__MotorStatus__FIELD_NAME__current_a[] = "current_a";
static char motor_driver__msg__MotorStatus__FIELD_NAME__status_flags[] = "status_flags";

static rosidl_runtime_c__type_description__Field motor_driver__msg__MotorStatus__FIELDS[] = {
  {
    {motor_driver__msg__MotorStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {motor_driver__msg__MotorStatus__FIELD_NAME__temperature_c, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_driver__msg__MotorStatus__FIELD_NAME__current_a, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_driver__msg__MotorStatus__FIELD_NAME__status_flags, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription motor_driver__msg__MotorStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motor_driver__msg__MotorStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motor_driver__msg__MotorStatus__TYPE_NAME, 28, 28},
      {motor_driver__msg__MotorStatus__FIELDS, 4, 4},
    },
    {motor_driver__msg__MotorStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# motor_driver/msg/MotorStatus.msg\n"
  "\n"
  "std_msgs/Header header   # \\xed\\x83\\x80\\xec\\x9e\\x84\\xec\\x8a\\xa4\\xed\\x83\\xac\\xed\\x94\\x84 \\xeb\\xb0\\x8f \\xed\\x94\\x84\\xeb\\xa0\\x88\\xec\\x9e\\x84 ID\n"
  "\n"
  "float32 temperature_c    # \\xeb\\xaa\\xa8\\xed\\x84\\xb0 \\xec\\x98\\xa8\\xeb\\x8f\\x84 (\\xec\\x84\\xad\\xec\\x94\\xa8)\n"
  "float32 current_a        # \\xeb\\xaa\\xa8\\xed\\x84\\xb0 \\xec\\xa0\\x84\\xeb\\xa5\\x98 (\\xec\\x95\\x94\\xed\\x8e\\x98\\xec\\x96\\xb4)\n"
  "uint16 status_flags      # \\xec\\x83\\x81\\xed\\x83\\x9c \\xed\\x94\\x8c\\xeb\\x9e\\x98\\xea\\xb7\\xb8 (\\xeb\\xb9\\x84\\xed\\x8a\\xb8\\xeb\\xa7\\x88\\xec\\x8a\\xa4\\xed\\x81\\xac \\xed\\x98\\x95\\xed\\x83\\x9c)\n"
  "# \\xec\\x98\\x88: 0x0001: Ready, 0x0002: Running, 0x0010: Warning, 0x0100: Error";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motor_driver__msg__MotorStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motor_driver__msg__MotorStatus__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 268, 268},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_driver__msg__MotorStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motor_driver__msg__MotorStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
