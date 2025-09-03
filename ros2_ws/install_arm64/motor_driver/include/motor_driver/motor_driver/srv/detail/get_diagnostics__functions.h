// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from motor_driver:srv/GetDiagnostics.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__FUNCTIONS_H_
#define MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "motor_driver/msg/rosidl_generator_c__visibility_control.h"

#include "motor_driver/srv/detail/get_diagnostics__struct.h"

/// Initialize srv/GetDiagnostics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_driver__srv__GetDiagnostics_Request
 * )) before or use
 * motor_driver__srv__GetDiagnostics_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Request__init(motor_driver__srv__GetDiagnostics_Request * msg);

/// Finalize srv/GetDiagnostics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
void
motor_driver__srv__GetDiagnostics_Request__fini(motor_driver__srv__GetDiagnostics_Request * msg);

/// Create srv/GetDiagnostics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_driver__srv__GetDiagnostics_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
motor_driver__srv__GetDiagnostics_Request *
motor_driver__srv__GetDiagnostics_Request__create();

/// Destroy srv/GetDiagnostics message.
/**
 * It calls
 * motor_driver__srv__GetDiagnostics_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
void
motor_driver__srv__GetDiagnostics_Request__destroy(motor_driver__srv__GetDiagnostics_Request * msg);

/// Check for srv/GetDiagnostics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Request__are_equal(const motor_driver__srv__GetDiagnostics_Request * lhs, const motor_driver__srv__GetDiagnostics_Request * rhs);

/// Copy a srv/GetDiagnostics message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Request__copy(
  const motor_driver__srv__GetDiagnostics_Request * input,
  motor_driver__srv__GetDiagnostics_Request * output);

/// Initialize array of srv/GetDiagnostics messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_driver__srv__GetDiagnostics_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Request__Sequence__init(motor_driver__srv__GetDiagnostics_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetDiagnostics messages.
/**
 * It calls
 * motor_driver__srv__GetDiagnostics_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
void
motor_driver__srv__GetDiagnostics_Request__Sequence__fini(motor_driver__srv__GetDiagnostics_Request__Sequence * array);

/// Create array of srv/GetDiagnostics messages.
/**
 * It allocates the memory for the array and calls
 * motor_driver__srv__GetDiagnostics_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
motor_driver__srv__GetDiagnostics_Request__Sequence *
motor_driver__srv__GetDiagnostics_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetDiagnostics messages.
/**
 * It calls
 * motor_driver__srv__GetDiagnostics_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
void
motor_driver__srv__GetDiagnostics_Request__Sequence__destroy(motor_driver__srv__GetDiagnostics_Request__Sequence * array);

/// Check for srv/GetDiagnostics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Request__Sequence__are_equal(const motor_driver__srv__GetDiagnostics_Request__Sequence * lhs, const motor_driver__srv__GetDiagnostics_Request__Sequence * rhs);

/// Copy an array of srv/GetDiagnostics messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Request__Sequence__copy(
  const motor_driver__srv__GetDiagnostics_Request__Sequence * input,
  motor_driver__srv__GetDiagnostics_Request__Sequence * output);

/// Initialize srv/GetDiagnostics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_driver__srv__GetDiagnostics_Response
 * )) before or use
 * motor_driver__srv__GetDiagnostics_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Response__init(motor_driver__srv__GetDiagnostics_Response * msg);

/// Finalize srv/GetDiagnostics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
void
motor_driver__srv__GetDiagnostics_Response__fini(motor_driver__srv__GetDiagnostics_Response * msg);

/// Create srv/GetDiagnostics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_driver__srv__GetDiagnostics_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
motor_driver__srv__GetDiagnostics_Response *
motor_driver__srv__GetDiagnostics_Response__create();

/// Destroy srv/GetDiagnostics message.
/**
 * It calls
 * motor_driver__srv__GetDiagnostics_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
void
motor_driver__srv__GetDiagnostics_Response__destroy(motor_driver__srv__GetDiagnostics_Response * msg);

/// Check for srv/GetDiagnostics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Response__are_equal(const motor_driver__srv__GetDiagnostics_Response * lhs, const motor_driver__srv__GetDiagnostics_Response * rhs);

/// Copy a srv/GetDiagnostics message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Response__copy(
  const motor_driver__srv__GetDiagnostics_Response * input,
  motor_driver__srv__GetDiagnostics_Response * output);

/// Initialize array of srv/GetDiagnostics messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_driver__srv__GetDiagnostics_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Response__Sequence__init(motor_driver__srv__GetDiagnostics_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetDiagnostics messages.
/**
 * It calls
 * motor_driver__srv__GetDiagnostics_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
void
motor_driver__srv__GetDiagnostics_Response__Sequence__fini(motor_driver__srv__GetDiagnostics_Response__Sequence * array);

/// Create array of srv/GetDiagnostics messages.
/**
 * It allocates the memory for the array and calls
 * motor_driver__srv__GetDiagnostics_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
motor_driver__srv__GetDiagnostics_Response__Sequence *
motor_driver__srv__GetDiagnostics_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetDiagnostics messages.
/**
 * It calls
 * motor_driver__srv__GetDiagnostics_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
void
motor_driver__srv__GetDiagnostics_Response__Sequence__destroy(motor_driver__srv__GetDiagnostics_Response__Sequence * array);

/// Check for srv/GetDiagnostics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Response__Sequence__are_equal(const motor_driver__srv__GetDiagnostics_Response__Sequence * lhs, const motor_driver__srv__GetDiagnostics_Response__Sequence * rhs);

/// Copy an array of srv/GetDiagnostics messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_driver
bool
motor_driver__srv__GetDiagnostics_Response__Sequence__copy(
  const motor_driver__srv__GetDiagnostics_Response__Sequence * input,
  motor_driver__srv__GetDiagnostics_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_DRIVER__SRV__DETAIL__GET_DIAGNOSTICS__FUNCTIONS_H_
