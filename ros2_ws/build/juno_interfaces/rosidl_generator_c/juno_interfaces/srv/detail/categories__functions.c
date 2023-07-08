// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from juno_interfaces:srv/Categories.idl
// generated code does not contain a copyright notice
#include "juno_interfaces/srv/detail/categories__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
juno_interfaces__srv__Categories_Request__init(juno_interfaces__srv__Categories_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
juno_interfaces__srv__Categories_Request__fini(juno_interfaces__srv__Categories_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
juno_interfaces__srv__Categories_Request__are_equal(const juno_interfaces__srv__Categories_Request * lhs, const juno_interfaces__srv__Categories_Request * rhs)
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
juno_interfaces__srv__Categories_Request__copy(
  const juno_interfaces__srv__Categories_Request * input,
  juno_interfaces__srv__Categories_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

juno_interfaces__srv__Categories_Request *
juno_interfaces__srv__Categories_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Categories_Request * msg = (juno_interfaces__srv__Categories_Request *)allocator.allocate(sizeof(juno_interfaces__srv__Categories_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juno_interfaces__srv__Categories_Request));
  bool success = juno_interfaces__srv__Categories_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
juno_interfaces__srv__Categories_Request__destroy(juno_interfaces__srv__Categories_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    juno_interfaces__srv__Categories_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
juno_interfaces__srv__Categories_Request__Sequence__init(juno_interfaces__srv__Categories_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Categories_Request * data = NULL;

  if (size) {
    data = (juno_interfaces__srv__Categories_Request *)allocator.zero_allocate(size, sizeof(juno_interfaces__srv__Categories_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juno_interfaces__srv__Categories_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juno_interfaces__srv__Categories_Request__fini(&data[i - 1]);
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
juno_interfaces__srv__Categories_Request__Sequence__fini(juno_interfaces__srv__Categories_Request__Sequence * array)
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
      juno_interfaces__srv__Categories_Request__fini(&array->data[i]);
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

juno_interfaces__srv__Categories_Request__Sequence *
juno_interfaces__srv__Categories_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Categories_Request__Sequence * array = (juno_interfaces__srv__Categories_Request__Sequence *)allocator.allocate(sizeof(juno_interfaces__srv__Categories_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = juno_interfaces__srv__Categories_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
juno_interfaces__srv__Categories_Request__Sequence__destroy(juno_interfaces__srv__Categories_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    juno_interfaces__srv__Categories_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
juno_interfaces__srv__Categories_Request__Sequence__are_equal(const juno_interfaces__srv__Categories_Request__Sequence * lhs, const juno_interfaces__srv__Categories_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!juno_interfaces__srv__Categories_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
juno_interfaces__srv__Categories_Request__Sequence__copy(
  const juno_interfaces__srv__Categories_Request__Sequence * input,
  juno_interfaces__srv__Categories_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(juno_interfaces__srv__Categories_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    juno_interfaces__srv__Categories_Request * data =
      (juno_interfaces__srv__Categories_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!juno_interfaces__srv__Categories_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          juno_interfaces__srv__Categories_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!juno_interfaces__srv__Categories_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `categories`
#include "juno_interfaces/msg/detail/category__functions.h"

bool
juno_interfaces__srv__Categories_Response__init(juno_interfaces__srv__Categories_Response * msg)
{
  if (!msg) {
    return false;
  }
  // categories
  if (!juno_interfaces__msg__Category__Sequence__init(&msg->categories, 0)) {
    juno_interfaces__srv__Categories_Response__fini(msg);
    return false;
  }
  return true;
}

void
juno_interfaces__srv__Categories_Response__fini(juno_interfaces__srv__Categories_Response * msg)
{
  if (!msg) {
    return;
  }
  // categories
  juno_interfaces__msg__Category__Sequence__fini(&msg->categories);
}

bool
juno_interfaces__srv__Categories_Response__are_equal(const juno_interfaces__srv__Categories_Response * lhs, const juno_interfaces__srv__Categories_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // categories
  if (!juno_interfaces__msg__Category__Sequence__are_equal(
      &(lhs->categories), &(rhs->categories)))
  {
    return false;
  }
  return true;
}

bool
juno_interfaces__srv__Categories_Response__copy(
  const juno_interfaces__srv__Categories_Response * input,
  juno_interfaces__srv__Categories_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // categories
  if (!juno_interfaces__msg__Category__Sequence__copy(
      &(input->categories), &(output->categories)))
  {
    return false;
  }
  return true;
}

juno_interfaces__srv__Categories_Response *
juno_interfaces__srv__Categories_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Categories_Response * msg = (juno_interfaces__srv__Categories_Response *)allocator.allocate(sizeof(juno_interfaces__srv__Categories_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juno_interfaces__srv__Categories_Response));
  bool success = juno_interfaces__srv__Categories_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
juno_interfaces__srv__Categories_Response__destroy(juno_interfaces__srv__Categories_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    juno_interfaces__srv__Categories_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
juno_interfaces__srv__Categories_Response__Sequence__init(juno_interfaces__srv__Categories_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Categories_Response * data = NULL;

  if (size) {
    data = (juno_interfaces__srv__Categories_Response *)allocator.zero_allocate(size, sizeof(juno_interfaces__srv__Categories_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juno_interfaces__srv__Categories_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juno_interfaces__srv__Categories_Response__fini(&data[i - 1]);
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
juno_interfaces__srv__Categories_Response__Sequence__fini(juno_interfaces__srv__Categories_Response__Sequence * array)
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
      juno_interfaces__srv__Categories_Response__fini(&array->data[i]);
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

juno_interfaces__srv__Categories_Response__Sequence *
juno_interfaces__srv__Categories_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Categories_Response__Sequence * array = (juno_interfaces__srv__Categories_Response__Sequence *)allocator.allocate(sizeof(juno_interfaces__srv__Categories_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = juno_interfaces__srv__Categories_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
juno_interfaces__srv__Categories_Response__Sequence__destroy(juno_interfaces__srv__Categories_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    juno_interfaces__srv__Categories_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
juno_interfaces__srv__Categories_Response__Sequence__are_equal(const juno_interfaces__srv__Categories_Response__Sequence * lhs, const juno_interfaces__srv__Categories_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!juno_interfaces__srv__Categories_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
juno_interfaces__srv__Categories_Response__Sequence__copy(
  const juno_interfaces__srv__Categories_Response__Sequence * input,
  juno_interfaces__srv__Categories_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(juno_interfaces__srv__Categories_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    juno_interfaces__srv__Categories_Response * data =
      (juno_interfaces__srv__Categories_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!juno_interfaces__srv__Categories_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          juno_interfaces__srv__Categories_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!juno_interfaces__srv__Categories_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
