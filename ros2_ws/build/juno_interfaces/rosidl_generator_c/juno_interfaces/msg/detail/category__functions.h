// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from juno_interfaces:msg/Category.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__MSG__DETAIL__CATEGORY__FUNCTIONS_H_
#define JUNO_INTERFACES__MSG__DETAIL__CATEGORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "juno_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "juno_interfaces/msg/detail/category__struct.h"

/// Initialize msg/Category message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * juno_interfaces__msg__Category
 * )) before or use
 * juno_interfaces__msg__Category__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
bool
juno_interfaces__msg__Category__init(juno_interfaces__msg__Category * msg);

/// Finalize msg/Category message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
void
juno_interfaces__msg__Category__fini(juno_interfaces__msg__Category * msg);

/// Create msg/Category message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * juno_interfaces__msg__Category__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
juno_interfaces__msg__Category *
juno_interfaces__msg__Category__create();

/// Destroy msg/Category message.
/**
 * It calls
 * juno_interfaces__msg__Category__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
void
juno_interfaces__msg__Category__destroy(juno_interfaces__msg__Category * msg);

/// Check for msg/Category message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
bool
juno_interfaces__msg__Category__are_equal(const juno_interfaces__msg__Category * lhs, const juno_interfaces__msg__Category * rhs);

/// Copy a msg/Category message.
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
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
bool
juno_interfaces__msg__Category__copy(
  const juno_interfaces__msg__Category * input,
  juno_interfaces__msg__Category * output);

/// Initialize array of msg/Category messages.
/**
 * It allocates the memory for the number of elements and calls
 * juno_interfaces__msg__Category__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
bool
juno_interfaces__msg__Category__Sequence__init(juno_interfaces__msg__Category__Sequence * array, size_t size);

/// Finalize array of msg/Category messages.
/**
 * It calls
 * juno_interfaces__msg__Category__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
void
juno_interfaces__msg__Category__Sequence__fini(juno_interfaces__msg__Category__Sequence * array);

/// Create array of msg/Category messages.
/**
 * It allocates the memory for the array and calls
 * juno_interfaces__msg__Category__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
juno_interfaces__msg__Category__Sequence *
juno_interfaces__msg__Category__Sequence__create(size_t size);

/// Destroy array of msg/Category messages.
/**
 * It calls
 * juno_interfaces__msg__Category__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
void
juno_interfaces__msg__Category__Sequence__destroy(juno_interfaces__msg__Category__Sequence * array);

/// Check for msg/Category message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
bool
juno_interfaces__msg__Category__Sequence__are_equal(const juno_interfaces__msg__Category__Sequence * lhs, const juno_interfaces__msg__Category__Sequence * rhs);

/// Copy an array of msg/Category messages.
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
ROSIDL_GENERATOR_C_PUBLIC_juno_interfaces
bool
juno_interfaces__msg__Category__Sequence__copy(
  const juno_interfaces__msg__Category__Sequence * input,
  juno_interfaces__msg__Category__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // JUNO_INTERFACES__MSG__DETAIL__CATEGORY__FUNCTIONS_H_
