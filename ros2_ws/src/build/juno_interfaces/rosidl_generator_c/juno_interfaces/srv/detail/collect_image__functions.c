// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from juno_interfaces:srv/CollectImage.idl
// generated code does not contain a copyright notice
#include "juno_interfaces/srv/detail/collect_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `category`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
juno_interfaces__srv__CollectImage_Request__init(juno_interfaces__srv__CollectImage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // category
  if (!rosidl_runtime_c__String__init(&msg->category)) {
    juno_interfaces__srv__CollectImage_Request__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    juno_interfaces__srv__CollectImage_Request__fini(msg);
    return false;
  }
  return true;
}

void
juno_interfaces__srv__CollectImage_Request__fini(juno_interfaces__srv__CollectImage_Request * msg)
{
  if (!msg) {
    return;
  }
  // category
  rosidl_runtime_c__String__fini(&msg->category);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
juno_interfaces__srv__CollectImage_Request__are_equal(const juno_interfaces__srv__CollectImage_Request * lhs, const juno_interfaces__srv__CollectImage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // category
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->category), &(rhs->category)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
juno_interfaces__srv__CollectImage_Request__copy(
  const juno_interfaces__srv__CollectImage_Request * input,
  juno_interfaces__srv__CollectImage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // category
  if (!rosidl_runtime_c__String__copy(
      &(input->category), &(output->category)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

juno_interfaces__srv__CollectImage_Request *
juno_interfaces__srv__CollectImage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__CollectImage_Request * msg = (juno_interfaces__srv__CollectImage_Request *)allocator.allocate(sizeof(juno_interfaces__srv__CollectImage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juno_interfaces__srv__CollectImage_Request));
  bool success = juno_interfaces__srv__CollectImage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
juno_interfaces__srv__CollectImage_Request__destroy(juno_interfaces__srv__CollectImage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    juno_interfaces__srv__CollectImage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
juno_interfaces__srv__CollectImage_Request__Sequence__init(juno_interfaces__srv__CollectImage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__CollectImage_Request * data = NULL;

  if (size) {
    data = (juno_interfaces__srv__CollectImage_Request *)allocator.zero_allocate(size, sizeof(juno_interfaces__srv__CollectImage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juno_interfaces__srv__CollectImage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juno_interfaces__srv__CollectImage_Request__fini(&data[i - 1]);
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
juno_interfaces__srv__CollectImage_Request__Sequence__fini(juno_interfaces__srv__CollectImage_Request__Sequence * array)
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
      juno_interfaces__srv__CollectImage_Request__fini(&array->data[i]);
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

juno_interfaces__srv__CollectImage_Request__Sequence *
juno_interfaces__srv__CollectImage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__CollectImage_Request__Sequence * array = (juno_interfaces__srv__CollectImage_Request__Sequence *)allocator.allocate(sizeof(juno_interfaces__srv__CollectImage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = juno_interfaces__srv__CollectImage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
juno_interfaces__srv__CollectImage_Request__Sequence__destroy(juno_interfaces__srv__CollectImage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    juno_interfaces__srv__CollectImage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
juno_interfaces__srv__CollectImage_Request__Sequence__are_equal(const juno_interfaces__srv__CollectImage_Request__Sequence * lhs, const juno_interfaces__srv__CollectImage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!juno_interfaces__srv__CollectImage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
juno_interfaces__srv__CollectImage_Request__Sequence__copy(
  const juno_interfaces__srv__CollectImage_Request__Sequence * input,
  juno_interfaces__srv__CollectImage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(juno_interfaces__srv__CollectImage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    juno_interfaces__srv__CollectImage_Request * data =
      (juno_interfaces__srv__CollectImage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!juno_interfaces__srv__CollectImage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          juno_interfaces__srv__CollectImage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!juno_interfaces__srv__CollectImage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
juno_interfaces__srv__CollectImage_Response__init(juno_interfaces__srv__CollectImage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // count
  return true;
}

void
juno_interfaces__srv__CollectImage_Response__fini(juno_interfaces__srv__CollectImage_Response * msg)
{
  if (!msg) {
    return;
  }
  // count
}

bool
juno_interfaces__srv__CollectImage_Response__are_equal(const juno_interfaces__srv__CollectImage_Response * lhs, const juno_interfaces__srv__CollectImage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
juno_interfaces__srv__CollectImage_Response__copy(
  const juno_interfaces__srv__CollectImage_Response * input,
  juno_interfaces__srv__CollectImage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

juno_interfaces__srv__CollectImage_Response *
juno_interfaces__srv__CollectImage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__CollectImage_Response * msg = (juno_interfaces__srv__CollectImage_Response *)allocator.allocate(sizeof(juno_interfaces__srv__CollectImage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juno_interfaces__srv__CollectImage_Response));
  bool success = juno_interfaces__srv__CollectImage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
juno_interfaces__srv__CollectImage_Response__destroy(juno_interfaces__srv__CollectImage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    juno_interfaces__srv__CollectImage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
juno_interfaces__srv__CollectImage_Response__Sequence__init(juno_interfaces__srv__CollectImage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__CollectImage_Response * data = NULL;

  if (size) {
    data = (juno_interfaces__srv__CollectImage_Response *)allocator.zero_allocate(size, sizeof(juno_interfaces__srv__CollectImage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juno_interfaces__srv__CollectImage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juno_interfaces__srv__CollectImage_Response__fini(&data[i - 1]);
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
juno_interfaces__srv__CollectImage_Response__Sequence__fini(juno_interfaces__srv__CollectImage_Response__Sequence * array)
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
      juno_interfaces__srv__CollectImage_Response__fini(&array->data[i]);
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

juno_interfaces__srv__CollectImage_Response__Sequence *
juno_interfaces__srv__CollectImage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__CollectImage_Response__Sequence * array = (juno_interfaces__srv__CollectImage_Response__Sequence *)allocator.allocate(sizeof(juno_interfaces__srv__CollectImage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = juno_interfaces__srv__CollectImage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
juno_interfaces__srv__CollectImage_Response__Sequence__destroy(juno_interfaces__srv__CollectImage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    juno_interfaces__srv__CollectImage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
juno_interfaces__srv__CollectImage_Response__Sequence__are_equal(const juno_interfaces__srv__CollectImage_Response__Sequence * lhs, const juno_interfaces__srv__CollectImage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!juno_interfaces__srv__CollectImage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
juno_interfaces__srv__CollectImage_Response__Sequence__copy(
  const juno_interfaces__srv__CollectImage_Response__Sequence * input,
  juno_interfaces__srv__CollectImage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(juno_interfaces__srv__CollectImage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    juno_interfaces__srv__CollectImage_Response * data =
      (juno_interfaces__srv__CollectImage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!juno_interfaces__srv__CollectImage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          juno_interfaces__srv__CollectImage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!juno_interfaces__srv__CollectImage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
