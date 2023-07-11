// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juno_interfaces:srv/Toggle.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__TOGGLE__STRUCT_H_
#define JUNO_INTERFACES__SRV__DETAIL__TOGGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Toggle in the package juno_interfaces.
typedef struct juno_interfaces__srv__Toggle_Request
{
  bool on;
} juno_interfaces__srv__Toggle_Request;

// Struct for a sequence of juno_interfaces__srv__Toggle_Request.
typedef struct juno_interfaces__srv__Toggle_Request__Sequence
{
  juno_interfaces__srv__Toggle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juno_interfaces__srv__Toggle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Toggle in the package juno_interfaces.
typedef struct juno_interfaces__srv__Toggle_Response
{
  bool status;
} juno_interfaces__srv__Toggle_Response;

// Struct for a sequence of juno_interfaces__srv__Toggle_Response.
typedef struct juno_interfaces__srv__Toggle_Response__Sequence
{
  juno_interfaces__srv__Toggle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juno_interfaces__srv__Toggle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUNO_INTERFACES__SRV__DETAIL__TOGGLE__STRUCT_H_
