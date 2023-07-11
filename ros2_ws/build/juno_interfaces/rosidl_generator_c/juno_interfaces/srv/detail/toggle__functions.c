// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from juno_interfaces:srv/Toggle.idl
// generated code does not contain a copyright notice
#include "juno_interfaces/srv/detail/toggle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
juno_interfaces__srv__Toggle_Request__init(juno_interfaces__srv__Toggle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // on
  return true;
}

void
juno_interfaces__srv__Toggle_Request__fini(juno_interfaces__srv__Toggle_Request * msg)
{
  if (!msg) {
    return;
  }
  // on
}

bool
juno_interfaces__srv__Toggle_Request__are_equal(const juno_interfaces__srv__Toggle_Request * lhs, const juno_interfaces__srv__Toggle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // on
  if (lhs->on != rhs->on) {
    return false;
  }
  return true;
}

bool
juno_interfaces__srv__Toggle_Request__copy(
  const juno_interfaces__srv__Toggle_Request * input,
  juno_interfaces__srv__Toggle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // on
  output->on = input->on;
  return true;
}

juno_interfaces__srv__Toggle_Request *
juno_interfaces__srv__Toggle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Toggle_Request * msg = (juno_interfaces__srv__Toggle_Request *)allocator.allocate(sizeof(juno_interfaces__srv__Toggle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juno_interfaces__srv__Toggle_Request));
  bool success = juno_interfaces__srv__Toggle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
juno_interfaces__srv__Toggle_Request__destroy(juno_interfaces__srv__Toggle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    juno_interfaces__srv__Toggle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
juno_interfaces__srv__Toggle_Request__Sequence__init(juno_interfaces__srv__Toggle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Toggle_Request * data = NULL;

  if (size) {
    data = (juno_interfaces__srv__Toggle_Request *)allocator.zero_allocate(size, sizeof(juno_interfaces__srv__Toggle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juno_interfaces__srv__Toggle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juno_interfaces__srv__Toggle_Request__fini(&data[i - 1]);
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
juno_interfaces__srv__Toggle_Request__Sequence__fini(juno_interfaces__srv__Toggle_Request__Sequence * array)
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
      juno_interfaces__srv__Toggle_Request__fini(&array->data[i]);
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

juno_interfaces__srv__Toggle_Request__Sequence *
juno_interfaces__srv__Toggle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Toggle_Request__Sequence * array = (juno_interfaces__srv__Toggle_Request__Sequence *)allocator.allocate(sizeof(juno_interfaces__srv__Toggle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = juno_interfaces__srv__Toggle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
juno_interfaces__srv__Toggle_Request__Sequence__destroy(juno_interfaces__srv__Toggle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    juno_interfaces__srv__Toggle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
juno_interfaces__srv__Toggle_Request__Sequence__are_equal(const juno_interfaces__srv__Toggle_Request__Sequence * lhs, const juno_interfaces__srv__Toggle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!juno_interfaces__srv__Toggle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
juno_interfaces__srv__Toggle_Request__Sequence__copy(
  const juno_interfaces__srv__Toggle_Request__Sequence * input,
  juno_interfaces__srv__Toggle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(juno_interfaces__srv__Toggle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    juno_interfaces__srv__Toggle_Request * data =
      (juno_interfaces__srv__Toggle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!juno_interfaces__srv__Toggle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          juno_interfaces__srv__Toggle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!juno_interfaces__srv__Toggle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
juno_interfaces__srv__Toggle_Response__init(juno_interfaces__srv__Toggle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
juno_interfaces__srv__Toggle_Response__fini(juno_interfaces__srv__Toggle_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
juno_interfaces__srv__Toggle_Response__are_equal(const juno_interfaces__srv__Toggle_Response * lhs, const juno_interfaces__srv__Toggle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
juno_interfaces__srv__Toggle_Response__copy(
  const juno_interfaces__srv__Toggle_Response * input,
  juno_interfaces__srv__Toggle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

juno_interfaces__srv__Toggle_Response *
juno_interfaces__srv__Toggle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Toggle_Response * msg = (juno_interfaces__srv__Toggle_Response *)allocator.allocate(sizeof(juno_interfaces__srv__Toggle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(juno_interfaces__srv__Toggle_Response));
  bool success = juno_interfaces__srv__Toggle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
juno_interfaces__srv__Toggle_Response__destroy(juno_interfaces__srv__Toggle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    juno_interfaces__srv__Toggle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
juno_interfaces__srv__Toggle_Response__Sequence__init(juno_interfaces__srv__Toggle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Toggle_Response * data = NULL;

  if (size) {
    data = (juno_interfaces__srv__Toggle_Response *)allocator.zero_allocate(size, sizeof(juno_interfaces__srv__Toggle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = juno_interfaces__srv__Toggle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        juno_interfaces__srv__Toggle_Response__fini(&data[i - 1]);
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
juno_interfaces__srv__Toggle_Response__Sequence__fini(juno_interfaces__srv__Toggle_Response__Sequence * array)
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
      juno_interfaces__srv__Toggle_Response__fini(&array->data[i]);
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

juno_interfaces__srv__Toggle_Response__Sequence *
juno_interfaces__srv__Toggle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  juno_interfaces__srv__Toggle_Response__Sequence * array = (juno_interfaces__srv__Toggle_Response__Sequence *)allocator.allocate(sizeof(juno_interfaces__srv__Toggle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = juno_interfaces__srv__Toggle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
juno_interfaces__srv__Toggle_Response__Sequence__destroy(juno_interfaces__srv__Toggle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    juno_interfaces__srv__Toggle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
juno_interfaces__srv__Toggle_Response__Sequence__are_equal(const juno_interfaces__srv__Toggle_Response__Sequence * lhs, const juno_interfaces__srv__Toggle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!juno_interfaces__srv__Toggle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
juno_interfaces__srv__Toggle_Response__Sequence__copy(
  const juno_interfaces__srv__Toggle_Response__Sequence * input,
  juno_interfaces__srv__Toggle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(juno_interfaces__srv__Toggle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    juno_interfaces__srv__Toggle_Response * data =
      (juno_interfaces__srv__Toggle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!juno_interfaces__srv__Toggle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          juno_interfaces__srv__Toggle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!juno_interfaces__srv__Toggle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
