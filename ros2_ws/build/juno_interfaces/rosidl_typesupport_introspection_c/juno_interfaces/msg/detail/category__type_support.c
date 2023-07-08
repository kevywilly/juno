// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from juno_interfaces:msg/Category.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "juno_interfaces/msg/detail/category__rosidl_typesupport_introspection_c.h"
#include "juno_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "juno_interfaces/msg/detail/category__functions.h"
#include "juno_interfaces/msg/detail/category__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  juno_interfaces__msg__Category__init(message_memory);
}

void juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_fini_function(void * message_memory)
{
  juno_interfaces__msg__Category__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juno_interfaces__msg__Category, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juno_interfaces__msg__Category, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_message_members = {
  "juno_interfaces__msg",  // message namespace
  "Category",  // message name
  2,  // number of fields
  sizeof(juno_interfaces__msg__Category),
  juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_message_member_array,  // message members
  juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_init_function,  // function to initialize message memory (memory has to be allocated)
  juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_message_type_support_handle = {
  0,
  &juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juno_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juno_interfaces, msg, Category)() {
  if (!juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_message_type_support_handle.typesupport_identifier) {
    juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &juno_interfaces__msg__Category__rosidl_typesupport_introspection_c__Category_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
