// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_driver:msg/MotorAlarm.idl
// generated code does not contain a copyright notice
#include "motor_driver/msg/detail/motor_alarm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
motor_driver__msg__MotorAlarm__init(motor_driver__msg__MotorAlarm * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    motor_driver__msg__MotorAlarm__fini(msg);
    return false;
  }
  // level
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    motor_driver__msg__MotorAlarm__fini(msg);
    return false;
  }
  return true;
}

void
motor_driver__msg__MotorAlarm__fini(motor_driver__msg__MotorAlarm * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // level
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
motor_driver__msg__MotorAlarm__are_equal(const motor_driver__msg__MotorAlarm * lhs, const motor_driver__msg__MotorAlarm * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
motor_driver__msg__MotorAlarm__copy(
  const motor_driver__msg__MotorAlarm * input,
  motor_driver__msg__MotorAlarm * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // level
  output->level = input->level;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

motor_driver__msg__MotorAlarm *
motor_driver__msg__MotorAlarm__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__msg__MotorAlarm * msg = (motor_driver__msg__MotorAlarm *)allocator.allocate(sizeof(motor_driver__msg__MotorAlarm), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_driver__msg__MotorAlarm));
  bool success = motor_driver__msg__MotorAlarm__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_driver__msg__MotorAlarm__destroy(motor_driver__msg__MotorAlarm * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_driver__msg__MotorAlarm__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_driver__msg__MotorAlarm__Sequence__init(motor_driver__msg__MotorAlarm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__msg__MotorAlarm * data = NULL;

  if (size) {
    data = (motor_driver__msg__MotorAlarm *)allocator.zero_allocate(size, sizeof(motor_driver__msg__MotorAlarm), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_driver__msg__MotorAlarm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_driver__msg__MotorAlarm__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
motor_driver__msg__MotorAlarm__Sequence__fini(motor_driver__msg__MotorAlarm__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motor_driver__msg__MotorAlarm__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

motor_driver__msg__MotorAlarm__Sequence *
motor_driver__msg__MotorAlarm__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__msg__MotorAlarm__Sequence * array = (motor_driver__msg__MotorAlarm__Sequence *)allocator.allocate(sizeof(motor_driver__msg__MotorAlarm__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_driver__msg__MotorAlarm__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_driver__msg__MotorAlarm__Sequence__destroy(motor_driver__msg__MotorAlarm__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_driver__msg__MotorAlarm__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_driver__msg__MotorAlarm__Sequence__are_equal(const motor_driver__msg__MotorAlarm__Sequence * lhs, const motor_driver__msg__MotorAlarm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_driver__msg__MotorAlarm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_driver__msg__MotorAlarm__Sequence__copy(
  const motor_driver__msg__MotorAlarm__Sequence * input,
  motor_driver__msg__MotorAlarm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_driver__msg__MotorAlarm);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_driver__msg__MotorAlarm * data =
      (motor_driver__msg__MotorAlarm *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_driver__msg__MotorAlarm__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_driver__msg__MotorAlarm__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_driver__msg__MotorAlarm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
