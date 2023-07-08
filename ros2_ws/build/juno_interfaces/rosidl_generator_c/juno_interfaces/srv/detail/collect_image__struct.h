// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from juno_interfaces:srv/CollectImage.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__STRUCT_H_
#define JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'category'
#include "rosidl_runtime_c/string.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/CollectImage in the package juno_interfaces.
typedef struct juno_interfaces__srv__CollectImage_Request
{
  rosidl_runtime_c__String category;
  sensor_msgs__msg__Image image;
} juno_interfaces__srv__CollectImage_Request;

// Struct for a sequence of juno_interfaces__srv__CollectImage_Request.
typedef struct juno_interfaces__srv__CollectImage_Request__Sequence
{
  juno_interfaces__srv__CollectImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juno_interfaces__srv__CollectImage_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CollectImage in the package juno_interfaces.
typedef struct juno_interfaces__srv__CollectImage_Response
{
  int64_t count;
} juno_interfaces__srv__CollectImage_Response;

// Struct for a sequence of juno_interfaces__srv__CollectImage_Response.
typedef struct juno_interfaces__srv__CollectImage_Response__Sequence
{
  juno_interfaces__srv__CollectImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} juno_interfaces__srv__CollectImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__STRUCT_H_
