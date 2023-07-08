// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from juno_interfaces:srv/Categories.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__STRUCT_HPP_
#define JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__juno_interfaces__srv__Categories_Request __attribute__((deprecated))
#else
# define DEPRECATED__juno_interfaces__srv__Categories_Request __declspec(deprecated)
#endif

namespace juno_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Categories_Request_
{
  using Type = Categories_Request_<ContainerAllocator>;

  explicit Categories_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Categories_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    juno_interfaces::srv::Categories_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const juno_interfaces::srv::Categories_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juno_interfaces::srv::Categories_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juno_interfaces::srv::Categories_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::srv::Categories_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::srv::Categories_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::srv::Categories_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::srv::Categories_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juno_interfaces::srv::Categories_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juno_interfaces::srv::Categories_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juno_interfaces__srv__Categories_Request
    std::shared_ptr<juno_interfaces::srv::Categories_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juno_interfaces__srv__Categories_Request
    std::shared_ptr<juno_interfaces::srv::Categories_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Categories_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Categories_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Categories_Request_

// alias to use template instance with default allocator
using Categories_Request =
  juno_interfaces::srv::Categories_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace juno_interfaces


// Include directives for member types
// Member 'categories'
#include "juno_interfaces/msg/detail/category__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__juno_interfaces__srv__Categories_Response __attribute__((deprecated))
#else
# define DEPRECATED__juno_interfaces__srv__Categories_Response __declspec(deprecated)
#endif

namespace juno_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Categories_Response_
{
  using Type = Categories_Response_<ContainerAllocator>;

  explicit Categories_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Categories_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _categories_type =
    std::vector<juno_interfaces::msg::Category_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<juno_interfaces::msg::Category_<ContainerAllocator>>>;
  _categories_type categories;

  // setters for named parameter idiom
  Type & set__categories(
    const std::vector<juno_interfaces::msg::Category_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<juno_interfaces::msg::Category_<ContainerAllocator>>> & _arg)
  {
    this->categories = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    juno_interfaces::srv::Categories_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const juno_interfaces::srv::Categories_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juno_interfaces::srv::Categories_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juno_interfaces::srv::Categories_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::srv::Categories_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::srv::Categories_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::srv::Categories_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::srv::Categories_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juno_interfaces::srv::Categories_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juno_interfaces::srv::Categories_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juno_interfaces__srv__Categories_Response
    std::shared_ptr<juno_interfaces::srv::Categories_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juno_interfaces__srv__Categories_Response
    std::shared_ptr<juno_interfaces::srv::Categories_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Categories_Response_ & other) const
  {
    if (this->categories != other.categories) {
      return false;
    }
    return true;
  }
  bool operator!=(const Categories_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Categories_Response_

// alias to use template instance with default allocator
using Categories_Response =
  juno_interfaces::srv::Categories_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace juno_interfaces

namespace juno_interfaces
{

namespace srv
{

struct Categories
{
  using Request = juno_interfaces::srv::Categories_Request;
  using Response = juno_interfaces::srv::Categories_Response;
};

}  // namespace srv

}  // namespace juno_interfaces

#endif  // JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__STRUCT_HPP_
