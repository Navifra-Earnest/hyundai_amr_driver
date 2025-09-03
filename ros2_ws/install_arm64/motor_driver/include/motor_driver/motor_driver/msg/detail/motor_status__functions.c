// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_driver:msg/MotorStatus.idl
// generated code does not contain a copyright notice
#include "motor_driver/msg/detail/motor_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
motor_driver__msg__MotorStatus__init(motor_driver__msg__MotorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    motor_driver__msg__MotorStatus__fini(msg);
    return false;
  }
  // temperature_c
  // current_a
  // status_flags
  return true;
}

void
motor_driver__msg__MotorStatus__fini(motor_driver__msg__MotorStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // temperature_c
  // current_a
  // status_flags
}

bool
motor_driver__msg__MotorStatus__are_equal(const motor_driver__msg__MotorStatus * lhs, const motor_driver__msg__MotorStatus * rhs)
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
  // temperature_c
  if (lhs->temperature_c != rhs->temperature_c) {
    return false;
  }
  // current_a
  if (lhs->current_a != rhs->current_a) {
    return false;
  }
  // status_flags
  if (lhs->status_flags != rhs->status_flags) {
    return false;
  }
  return true;
}

bool
motor_driver__msg__MotorStatus__copy(
  const motor_driver__msg__MotorStatus * input,
  motor_driver__msg__MotorStatus * output)
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
  // temperature_c
  output->temperature_c = input->temperature_c;
  // current_a
  output->current_a = input->current_a;
  // status_flags
  output->status_flags = input->status_flags;
  return true;
}

motor_driver__msg__MotorStatus *
motor_driver__msg__MotorStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__msg__MotorStatus * msg = (motor_driver__msg__MotorStatus *)allocator.allocate(sizeof(motor_driver__msg__MotorStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_driver__msg__MotorStatus));
  bool success = motor_driver__msg__MotorStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_driver__msg__MotorStatus__destroy(motor_driver__msg__MotorStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_driver__msg__MotorStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_driver__msg__MotorStatus__Sequence__init(motor_driver__msg__MotorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__msg__MotorStatus * data = NULL;

  if (size) {
    data = (motor_driver__msg__MotorStatus *)allocator.zero_allocate(size, sizeof(motor_driver__msg__MotorStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_driver__msg__MotorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_driver__msg__MotorStatus__fini(&data[i - 1]);
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
motor_driver__msg__MotorStatus__Sequence__fini(motor_driver__msg__MotorStatus__Sequence * array)
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
      motor_driver__msg__MotorStatus__fini(&array->data[i]);
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

motor_driver__msg__MotorStatus__Sequence *
motor_driver__msg__MotorStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__msg__MotorStatus__Sequence * array = (motor_driver__msg__MotorStatus__Sequence *)allocator.allocate(sizeof(motor_driver__msg__MotorStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_driver__msg__MotorStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_driver__msg__MotorStatus__Sequence__destroy(motor_driver__msg__MotorStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_driver__msg__MotorStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_driver__msg__MotorStatus__Sequence__are_equal(const motor_driver__msg__MotorStatus__Sequence * lhs, const motor_driver__msg__MotorStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_driver__msg__MotorStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_driver__msg__MotorStatus__Sequence__copy(
  const motor_driver__msg__MotorStatus__Sequence * input,
  motor_driver__msg__MotorStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_driver__msg__MotorStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_driver__msg__MotorStatus * data =
      (motor_driver__msg__MotorStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_driver__msg__MotorStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_driver__msg__MotorStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_driver__msg__MotorStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
