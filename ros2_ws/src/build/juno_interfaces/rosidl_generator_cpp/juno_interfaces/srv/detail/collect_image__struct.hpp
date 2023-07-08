// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from juno_interfaces:srv/CollectImage.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__STRUCT_HPP_
#define JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__juno_interfaces__srv__CollectImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__juno_interfaces__srv__CollectImage_Request __declspec(deprecated)
#endif

namespace juno_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CollectImage_Request_
{
  using Type = CollectImage_Request_<ContainerAllocator>;

  explicit CollectImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->category = "";
    }
  }

  explicit CollectImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : category(_alloc),
    image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->category = "";
    }
  }

  // field types and members
  using _category_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _category_type category;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__category(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->category = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    juno_interfaces::srv::CollectImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const juno_interfaces::srv::CollectImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juno_interfaces::srv::CollectImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juno_interfaces::srv::CollectImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::srv::CollectImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::srv::CollectImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::srv::CollectImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::srv::CollectImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juno_interfaces::srv::CollectImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juno_interfaces::srv::CollectImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juno_interfaces__srv__CollectImage_Request
    std::shared_ptr<juno_interfaces::srv::CollectImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juno_interfaces__srv__CollectImage_Request
    std::shared_ptr<juno_interfaces::srv::CollectImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectImage_Request_ & other) const
  {
    if (this->category != other.category) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectImage_Request_

// alias to use template instance with default allocator
using CollectImage_Request =
  juno_interfaces::srv::CollectImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace juno_interfaces


#ifndef _WIN32
# define DEPRECATED__juno_interfaces__srv__CollectImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__juno_interfaces__srv__CollectImage_Response __declspec(deprecated)
#endif

namespace juno_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CollectImage_Response_
{
  using Type = CollectImage_Response_<ContainerAllocator>;

  explicit CollectImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ll;
    }
  }

  explicit CollectImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ll;
    }
  }

  // field types and members
  using _count_type =
    int64_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__count(
    const int64_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    juno_interfaces::srv::CollectImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const juno_interfaces::srv::CollectImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<juno_interfaces::srv::CollectImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<juno_interfaces::srv::CollectImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::srv::CollectImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::srv::CollectImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      juno_interfaces::srv::CollectImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<juno_interfaces::srv::CollectImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<juno_interfaces::srv::CollectImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<juno_interfaces::srv::CollectImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__juno_interfaces__srv__CollectImage_Response
    std::shared_ptr<juno_interfaces::srv::CollectImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__juno_interfaces__srv__CollectImage_Response
    std::shared_ptr<juno_interfaces::srv::CollectImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollectImage_Response_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollectImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollectImage_Response_

// alias to use template instance with default allocator
using CollectImage_Response =
  juno_interfaces::srv::CollectImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace juno_interfaces

namespace juno_interfaces
{

namespace srv
{

struct CollectImage
{
  using Request = juno_interfaces::srv::CollectImage_Request;
  using Response = juno_interfaces::srv::CollectImage_Response;
};

}  // namespace srv

}  // namespace juno_interfaces

#endif  // JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__STRUCT_HPP_
