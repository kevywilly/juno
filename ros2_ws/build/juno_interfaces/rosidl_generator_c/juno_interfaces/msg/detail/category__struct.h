// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juno_interfaces:msg/Category.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__MSG__DETAIL__CATEGORY__STRUCT_H_
#define JUNO_INTERFACES__MSG__DETAIL__CATEGORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Category in the package juno_interfaces.
typedef struct juno_interfaces__msg__Category
{
  rosidl_runtime_c__String name;
  uint16_t count;
} juno_interfaces__msg__Category;

// Struct for a sequence of juno_interfaces__msg__Category.
typedef struct juno_interfaces__msg__Category__Sequence
{
  juno_interfaces__msg__Category * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juno_interfaces__msg__Category__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUNO_INTERFACES__MSG__DETAIL__CATEGORY__STRUCT_H_
