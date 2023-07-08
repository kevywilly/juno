// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from juno_interfaces:msg/Category.idl
// generated code does not contain a copyright notice
#include "juno_interfaces/msg/detail/category__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
juno_interfaces__msg__Category__init(juno_interfaces__msg__Category * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    juno_interfaces__msg__Category__fini(msg);
    return false;
  }
  // count
  return true;
}

void
juno_interfaces__msg__Category__fini(juno_interfaces__msg__Category * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // count
}

bool
juno_interfaces__msg__Category__are_equal(const juno_interfaces__msg__Category * lhs, const juno_interfaces__msg__Category * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
juno_interfaces__msg__Category__copy(
  const juno_interfaces__msg__Category * input,
  juno_interfaces__msg__Category * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

juno_interfaces__msg__Category *
juno_interfaces__msg__Category__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__msg__Category * msg = (juno_interfaces__msg__Category *)allocator.allocate(sizeof(juno_interfaces__msg__Category), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juno_interfaces__msg__Category));
  bool success = juno_interfaces__msg__Category__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
juno_interfaces__msg__Category__destroy(juno_interfaces__msg__Category * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    juno_interfaces__msg__Category__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
juno_interfaces__msg__Category__Sequence__init(juno_interfaces__msg__Category__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__msg__Category * data = NULL;

  if (size) {
    data = (juno_interfaces__msg__Category *)allocator.zero_allocate(size, sizeof(juno_interfaces__msg__Category), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juno_interfaces__msg__Category__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juno_interfaces__msg__Category__fini(&data[i - 1]);
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
juno_interfaces__msg__Category__Sequence__fini(juno_interfaces__msg__Category__Sequence * array)
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
      juno_interfaces__msg__Category__fini(&array->data[i]);
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

juno_interfaces__msg__Category__Sequence *
juno_interfaces__msg__Category__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__msg__Category__Sequence * array = (juno_interfaces__msg__Category__Sequence *)allocator.allocate(sizeof(juno_interfaces__msg__Category__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = juno_interfaces__msg__Category__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
juno_interfaces__msg__Category__Sequence__destroy(juno_interfaces__msg__Category__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    juno_interfaces__msg__Category__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
juno_interfaces__msg__Category__Sequence__are_equal(const juno_interfaces__msg__Category__Sequence * lhs, const juno_interfaces__msg__Category__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!juno_interfaces__msg__Category__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
juno_interfaces__msg__Category__Sequence__copy(
  const juno_interfaces__msg__Category__Sequence * input,
  juno_interfaces__msg__Category__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(juno_interfaces__msg__Category);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    juno_interfaces__msg__Category * data =
      (juno_interfaces__msg__Category *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!juno_interfaces__msg__Category__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          juno_interfaces__msg__Category__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!juno_interfaces__msg__Category__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
