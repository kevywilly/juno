// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from juno_interfaces:msg/Category.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__MSG__DETAIL__CATEGORY__STRUCT_HPP_
#define JUNO_INTERFACES__MSG__DETAIL__CATEGORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__juno_interfaces__msg__Category __attribute__((deprecated))
#else
# define DEPRECATED__juno_interfaces__msg__Category __declspec(deprecated)
#endif

namespace juno_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Category_
{
  using Type = Category_<ContainerAllocator>;

  explicit Category_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->count = 0;
    }
  }

  explicit Category_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->count = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _count_type =
    uint16_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__count(
    const uint16_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    juno_interfaces::msg::Category_<ContainerAllocator> *;
  using ConstRawPtr =
    const juno_interfaces::msg::Category_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juno_interfaces::msg::Category_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juno_interfaces::msg::Category_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::msg::Category_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::msg::Category_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::msg::Category_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::msg::Category_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juno_interfaces::msg::Category_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juno_interfaces::msg::Category_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juno_interfaces__msg__Category
    std::shared_ptr<juno_interfaces::msg::Category_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juno_interfaces__msg__Category
    std::shared_ptr<juno_interfaces::msg::Category_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Category_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const Category_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Category_

// alias to use template instance with default allocator
using Category =
  juno_interfaces::msg::Category_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace juno_interfaces

#endif  // JUNO_INTERFACES__MSG__DETAIL__CATEGORY__STRUCT_HPP_
