// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juno_interfaces:srv/Categories.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__STRUCT_H_
#define JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Categories in the package juno_interfaces.
typedef struct juno_interfaces__srv__Categories_Request
{
  uint8_t structure_needs_at_least_one_member;
} juno_interfaces__srv__Categories_Request;

// Struct for a sequence of juno_interfaces__srv__Categories_Request.
typedef struct juno_interfaces__srv__Categories_Request__Sequence
{
  juno_interfaces__srv__Categories_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juno_interfaces__srv__Categories_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'categories'
#include "juno_interfaces/msg/detail/category__struct.h"

/// Struct defined in srv/Categories in the package juno_interfaces.
typedef struct juno_interfaces__srv__Categories_Response
{
  juno_interfaces__msg__Category__Sequence categories;
} juno_interfaces__srv__Categories_Response;

// Struct for a sequence of juno_interfaces__srv__Categories_Response.
typedef struct juno_interfaces__srv__Categories_Response__Sequence
{
  juno_interfaces__srv__Categories_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juno_interfaces__srv__Categories_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__STRUCT_H_
