// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from juno_interfaces:srv/Categories.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "juno_interfaces/srv/detail/categories__rosidl_typesupport_introspection_c.h"
#include "juno_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "juno_interfaces/srv/detail/categories__functions.h"
#include "juno_interfaces/srv/detail/categories__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  juno_interfaces__srv__Categories_Request__init(message_memory);
}

void juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_fini_function(void * message_memory)
{
  juno_interfaces__srv__Categories_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juno_interfaces__srv__Categories_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_message_members = {
  "juno_interfaces__srv",  // message namespace
  "Categories_Request",  // message name
  1,  // number of fields
  sizeof(juno_interfaces__srv__Categories_Request),
  juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_message_member_array,  // message members
  juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_message_type_support_handle = {
  0,
  &juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juno_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juno_interfaces, srv, Categories_Request)() {
  if (!juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_message_type_support_handle.typesupport_identifier) {
    juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &juno_interfaces__srv__Categories_Request__rosidl_typesupport_introspection_c__Categories_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "juno_interfaces/srv/detail/categories__rosidl_typesupport_introspection_c.h"
// already included above
// #include "juno_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "juno_interfaces/srv/detail/categories__functions.h"
// already included above
// #include "juno_interfaces/srv/detail/categories__struct.h"


// Include directives for member types
// Member `categories`
#include "juno_interfaces/msg/category.h"
// Member `categories`
#include "juno_interfaces/msg/detail/category__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  juno_interfaces__srv__Categories_Response__init(message_memory);
}

void juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_fini_function(void * message_memory)
{
  juno_interfaces__srv__Categories_Response__fini(message_memory);
}

size_t juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__size_function__Categories_Response__categories(
  const void * untyped_member)
{
  const juno_interfaces__msg__Category__Sequence * member =
    (const juno_interfaces__msg__Category__Sequence *)(untyped_member);
  return member->size;
}

const void * juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__get_const_function__Categories_Response__categories(
  const void * untyped_member, size_t index)
{
  const juno_interfaces__msg__Category__Sequence * member =
    (const juno_interfaces__msg__Category__Sequence *)(untyped_member);
  return &member->data[index];
}

void * juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__get_function__Categories_Response__categories(
  void * untyped_member, size_t index)
{
  juno_interfaces__msg__Category__Sequence * member =
    (juno_interfaces__msg__Category__Sequence *)(untyped_member);
  return &member->data[index];
}

void juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__fetch_function__Categories_Response__categories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const juno_interfaces__msg__Category * item =
    ((const juno_interfaces__msg__Category *)
    juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__get_const_function__Categories_Response__categories(untyped_member, index));
  juno_interfaces__msg__Category * value =
    (juno_interfaces__msg__Category *)(untyped_value);
  *value = *item;
}

void juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__assign_function__Categories_Response__categories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  juno_interfaces__msg__Category * item =
    ((juno_interfaces__msg__Category *)
    juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__get_function__Categories_Response__categories(untyped_member, index));
  const juno_interfaces__msg__Category * value =
    (const juno_interfaces__msg__Category *)(untyped_value);
  *item = *value;
}

bool juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__resize_function__Categories_Response__categories(
  void * untyped_member, size_t size)
{
  juno_interfaces__msg__Category__Sequence * member =
    (juno_interfaces__msg__Category__Sequence *)(untyped_member);
  juno_interfaces__msg__Category__Sequence__fini(member);
  return juno_interfaces__msg__Category__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_message_member_array[1] = {
  {
    "categories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(juno_interfaces__srv__Categories_Response, categories),  // bytes offset in struct
    NULL,  // default value
    juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__size_function__Categories_Response__categories,  // size() function pointer
    juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__get_const_function__Categories_Response__categories,  // get_const(index) function pointer
    juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__get_function__Categories_Response__categories,  // get(index) function pointer
    juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__fetch_function__Categories_Response__categories,  // fetch(index, &value) function pointer
    juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__assign_function__Categories_Response__categories,  // assign(index, value) function pointer
    juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__resize_function__Categories_Response__categories  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_message_members = {
  "juno_interfaces__srv",  // message namespace
  "Categories_Response",  // message name
  1,  // number of fields
  sizeof(juno_interfaces__srv__Categories_Response),
  juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_message_member_array,  // message members
  juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_message_type_support_handle = {
  0,
  &juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juno_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juno_interfaces, srv, Categories_Response)() {
  juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juno_interfaces, msg, Category)();
  if (!juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_message_type_support_handle.typesupport_identifier) {
    juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &juno_interfaces__srv__Categories_Response__rosidl_typesupport_introspection_c__Categories_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "juno_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "juno_interfaces/srv/detail/categories__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers juno_interfaces__srv__detail__categories__rosidl_typesupport_introspection_c__Categories_service_members = {
  "juno_interfaces__srv",  // service namespace
  "Categories",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // juno_interfaces__srv__detail__categories__rosidl_typesupport_introspection_c__Categories_Request_message_type_support_handle,
  NULL  // response message
  // juno_interfaces__srv__detail__categories__rosidl_typesupport_introspection_c__Categories_Response_message_type_support_handle
};

static rosidl_service_type_support_t juno_interfaces__srv__detail__categories__rosidl_typesupport_introspection_c__Categories_service_type_support_handle = {
  0,
  &juno_interfaces__srv__detail__categories__rosidl_typesupport_introspection_c__Categories_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juno_interfaces, srv, Categories_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juno_interfaces, srv, Categories_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_juno_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juno_interfaces, srv, Categories)() {
  if (!juno_interfaces__srv__detail__categories__rosidl_typesupport_introspection_c__Categories_service_type_support_handle.typesupport_identifier) {
    juno_interfaces__srv__detail__categories__rosidl_typesupport_introspection_c__Categories_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)juno_interfaces__srv__detail__categories__rosidl_typesupport_introspection_c__Categories_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juno_interfaces, srv, Categories_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, juno_interfaces, srv, Categories_Response)()->data;
  }

  return &juno_interfaces__srv__detail__categories__rosidl_typesupport_introspection_c__Categories_service_type_support_handle;
}
