// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice
#include "motor_driver/srv/detail/get_diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
motor_driver__srv__GetDiagnostics_Request__init(motor_driver__srv__GetDiagnostics_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
motor_driver__srv__GetDiagnostics_Request__fini(motor_driver__srv__GetDiagnostics_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
motor_driver__srv__GetDiagnostics_Request__are_equal(const motor_driver__srv__GetDiagnostics_Request * lhs, const motor_driver__srv__GetDiagnostics_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
motor_driver__srv__GetDiagnostics_Request__copy(
  const motor_driver__srv__GetDiagnostics_Request * input,
  motor_driver__srv__GetDiagnostics_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

motor_driver__srv__GetDiagnostics_Request *
motor_driver__srv__GetDiagnostics_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__srv__GetDiagnostics_Request * msg = (motor_driver__srv__GetDiagnostics_Request *)allocator.allocate(sizeof(motor_driver__srv__GetDiagnostics_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_driver__srv__GetDiagnostics_Request));
  bool success = motor_driver__srv__GetDiagnostics_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_driver__srv__GetDiagnostics_Request__destroy(motor_driver__srv__GetDiagnostics_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_driver__srv__GetDiagnostics_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_driver__srv__GetDiagnostics_Request__Sequence__init(motor_driver__srv__GetDiagnostics_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__srv__GetDiagnostics_Request * data = NULL;

  if (size) {
    data = (motor_driver__srv__GetDiagnostics_Request *)allocator.zero_allocate(size, sizeof(motor_driver__srv__GetDiagnostics_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_driver__srv__GetDiagnostics_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_driver__srv__GetDiagnostics_Request__fini(&data[i - 1]);
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
motor_driver__srv__GetDiagnostics_Request__Sequence__fini(motor_driver__srv__GetDiagnostics_Request__Sequence * array)
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
      motor_driver__srv__GetDiagnostics_Request__fini(&array->data[i]);
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

motor_driver__srv__GetDiagnostics_Request__Sequence *
motor_driver__srv__GetDiagnostics_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__srv__GetDiagnostics_Request__Sequence * array = (motor_driver__srv__GetDiagnostics_Request__Sequence *)allocator.allocate(sizeof(motor_driver__srv__GetDiagnostics_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_driver__srv__GetDiagnostics_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_driver__srv__GetDiagnostics_Request__Sequence__destroy(motor_driver__srv__GetDiagnostics_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_driver__srv__GetDiagnostics_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_driver__srv__GetDiagnostics_Request__Sequence__are_equal(const motor_driver__srv__GetDiagnostics_Request__Sequence * lhs, const motor_driver__srv__GetDiagnostics_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_driver__srv__GetDiagnostics_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_driver__srv__GetDiagnostics_Request__Sequence__copy(
  const motor_driver__srv__GetDiagnostics_Request__Sequence * input,
  motor_driver__srv__GetDiagnostics_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_driver__srv__GetDiagnostics_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_driver__srv__GetDiagnostics_Request * data =
      (motor_driver__srv__GetDiagnostics_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_driver__srv__GetDiagnostics_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_driver__srv__GetDiagnostics_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_driver__srv__GetDiagnostics_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "motor_driver/msg/detail/motor_status__functions.h"
// Member `alarms`
#include "motor_driver/msg/detail/motor_alarm__functions.h"

bool
motor_driver__srv__GetDiagnostics_Response__init(motor_driver__srv__GetDiagnostics_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status
  if (!motor_driver__msg__MotorStatus__init(&msg->status)) {
    motor_driver__srv__GetDiagnostics_Response__fini(msg);
    return false;
  }
  // alarms
  if (!motor_driver__msg__MotorAlarm__Sequence__init(&msg->alarms, 0)) {
    motor_driver__srv__GetDiagnostics_Response__fini(msg);
    return false;
  }
  return true;
}

void
motor_driver__srv__GetDiagnostics_Response__fini(motor_driver__srv__GetDiagnostics_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status
  motor_driver__msg__MotorStatus__fini(&msg->status);
  // alarms
  motor_driver__msg__MotorAlarm__Sequence__fini(&msg->alarms);
}

bool
motor_driver__srv__GetDiagnostics_Response__are_equal(const motor_driver__srv__GetDiagnostics_Response * lhs, const motor_driver__srv__GetDiagnostics_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status
  if (!motor_driver__msg__MotorStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // alarms
  if (!motor_driver__msg__MotorAlarm__Sequence__are_equal(
      &(lhs->alarms), &(rhs->alarms)))
  {
    return false;
  }
  return true;
}

bool
motor_driver__srv__GetDiagnostics_Response__copy(
  const motor_driver__srv__GetDiagnostics_Response * input,
  motor_driver__srv__GetDiagnostics_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // status
  if (!motor_driver__msg__MotorStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // alarms
  if (!motor_driver__msg__MotorAlarm__Sequence__copy(
      &(input->alarms), &(output->alarms)))
  {
    return false;
  }
  return true;
}

motor_driver__srv__GetDiagnostics_Response *
motor_driver__srv__GetDiagnostics_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__srv__GetDiagnostics_Response * msg = (motor_driver__srv__GetDiagnostics_Response *)allocator.allocate(sizeof(motor_driver__srv__GetDiagnostics_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_driver__srv__GetDiagnostics_Response));
  bool success = motor_driver__srv__GetDiagnostics_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_driver__srv__GetDiagnostics_Response__destroy(motor_driver__srv__GetDiagnostics_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_driver__srv__GetDiagnostics_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_driver__srv__GetDiagnostics_Response__Sequence__init(motor_driver__srv__GetDiagnostics_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__srv__GetDiagnostics_Response * data = NULL;

  if (size) {
    data = (motor_driver__srv__GetDiagnostics_Response *)allocator.zero_allocate(size, sizeof(motor_driver__srv__GetDiagnostics_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_driver__srv__GetDiagnostics_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_driver__srv__GetDiagnostics_Response__fini(&data[i - 1]);
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
motor_driver__srv__GetDiagnostics_Response__Sequence__fini(motor_driver__srv__GetDiagnostics_Response__Sequence * array)
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
      motor_driver__srv__GetDiagnostics_Response__fini(&array->data[i]);
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

motor_driver__srv__GetDiagnostics_Response__Sequence *
motor_driver__srv__GetDiagnostics_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__srv__GetDiagnostics_Response__Sequence * array = (motor_driver__srv__GetDiagnostics_Response__Sequence *)allocator.allocate(sizeof(motor_driver__srv__GetDiagnostics_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_driver__srv__GetDiagnostics_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_driver__srv__GetDiagnostics_Response__Sequence__destroy(motor_driver__srv__GetDiagnostics_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_driver__srv__GetDiagnostics_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_driver__srv__GetDiagnostics_Response__Sequence__are_equal(const motor_driver__srv__GetDiagnostics_Response__Sequence * lhs, const motor_driver__srv__GetDiagnostics_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_driver__srv__GetDiagnostics_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_driver__srv__GetDiagnostics_Response__Sequence__copy(
  const motor_driver__srv__GetDiagnostics_Response__Sequence * input,
  motor_driver__srv__GetDiagnostics_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_driver__srv__GetDiagnostics_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_driver__srv__GetDiagnostics_Response * data =
      (motor_driver__srv__GetDiagnostics_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_driver__srv__GetDiagnostics_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_driver__srv__GetDiagnostics_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_driver__srv__GetDiagnostics_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "motor_driver/srv/detail/get_diagnostics__functions.h"

bool
motor_driver__srv__GetDiagnostics_Event__init(motor_driver__srv__GetDiagnostics_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    motor_driver__srv__GetDiagnostics_Event__fini(msg);
    return false;
  }
  // request
  if (!motor_driver__srv__GetDiagnostics_Request__Sequence__init(&msg->request, 0)) {
    motor_driver__srv__GetDiagnostics_Event__fini(msg);
    return false;
  }
  // response
  if (!motor_driver__srv__GetDiagnostics_Response__Sequence__init(&msg->response, 0)) {
    motor_driver__srv__GetDiagnostics_Event__fini(msg);
    return false;
  }
  return true;
}

void
motor_driver__srv__GetDiagnostics_Event__fini(motor_driver__srv__GetDiagnostics_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  motor_driver__srv__GetDiagnostics_Request__Sequence__fini(&msg->request);
  // response
  motor_driver__srv__GetDiagnostics_Response__Sequence__fini(&msg->response);
}

bool
motor_driver__srv__GetDiagnostics_Event__are_equal(const motor_driver__srv__GetDiagnostics_Event * lhs, const motor_driver__srv__GetDiagnostics_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!motor_driver__srv__GetDiagnostics_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!motor_driver__srv__GetDiagnostics_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
motor_driver__srv__GetDiagnostics_Event__copy(
  const motor_driver__srv__GetDiagnostics_Event * input,
  motor_driver__srv__GetDiagnostics_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!motor_driver__srv__GetDiagnostics_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!motor_driver__srv__GetDiagnostics_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

motor_driver__srv__GetDiagnostics_Event *
motor_driver__srv__GetDiagnostics_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__srv__GetDiagnostics_Event * msg = (motor_driver__srv__GetDiagnostics_Event *)allocator.allocate(sizeof(motor_driver__srv__GetDiagnostics_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_driver__srv__GetDiagnostics_Event));
  bool success = motor_driver__srv__GetDiagnostics_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_driver__srv__GetDiagnostics_Event__destroy(motor_driver__srv__GetDiagnostics_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_driver__srv__GetDiagnostics_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_driver__srv__GetDiagnostics_Event__Sequence__init(motor_driver__srv__GetDiagnostics_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__srv__GetDiagnostics_Event * data = NULL;

  if (size) {
    data = (motor_driver__srv__GetDiagnostics_Event *)allocator.zero_allocate(size, sizeof(motor_driver__srv__GetDiagnostics_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_driver__srv__GetDiagnostics_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_driver__srv__GetDiagnostics_Event__fini(&data[i - 1]);
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
motor_driver__srv__GetDiagnostics_Event__Sequence__fini(motor_driver__srv__GetDiagnostics_Event__Sequence * array)
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
      motor_driver__srv__GetDiagnostics_Event__fini(&array->data[i]);
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

motor_driver__srv__GetDiagnostics_Event__Sequence *
motor_driver__srv__GetDiagnostics_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_driver__srv__GetDiagnostics_Event__Sequence * array = (motor_driver__srv__GetDiagnostics_Event__Sequence *)allocator.allocate(sizeof(motor_driver__srv__GetDiagnostics_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_driver__srv__GetDiagnostics_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_driver__srv__GetDiagnostics_Event__Sequence__destroy(motor_driver__srv__GetDiagnostics_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_driver__srv__GetDiagnostics_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_driver__srv__GetDiagnostics_Event__Sequence__are_equal(const motor_driver__srv__GetDiagnostics_Event__Sequence * lhs, const motor_driver__srv__GetDiagnostics_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_driver__srv__GetDiagnostics_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_driver__srv__GetDiagnostics_Event__Sequence__copy(
  const motor_driver__srv__GetDiagnostics_Event__Sequence * input,
  motor_driver__srv__GetDiagnostics_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_driver__srv__GetDiagnostics_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_driver__srv__GetDiagnostics_Event * data =
      (motor_driver__srv__GetDiagnostics_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_driver__srv__GetDiagnostics_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_driver__srv__GetDiagnostics_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_driver__srv__GetDiagnostics_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
