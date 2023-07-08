// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from juno_interfaces:srv/CollectImage.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__BUILDER_HPP_
#define JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "juno_interfaces/srv/detail/collect_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace juno_interfaces
{

namespace srv
{

namespace builder
{

class Init_CollectImage_Request_image
{
public:
  explicit Init_CollectImage_Request_image(::juno_interfaces::srv::CollectImage_Request & msg)
  : msg_(msg)
  {}
  ::juno_interfaces::srv::CollectImage_Request image(::juno_interfaces::srv::CollectImage_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::juno_interfaces::srv::CollectImage_Request msg_;
};

class Init_CollectImage_Request_category
{
public:
  Init_CollectImage_Request_category()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CollectImage_Request_image category(::juno_interfaces::srv::CollectImage_Request::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_CollectImage_Request_image(msg_);
  }

private:
  ::juno_interfaces::srv::CollectImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::juno_interfaces::srv::CollectImage_Request>()
{
  return juno_interfaces::srv::builder::Init_CollectImage_Request_category();
}

}  // namespace juno_interfaces


namespace juno_interfaces
{

namespace srv
{

namespace builder
{

class Init_CollectImage_Response_count
{
public:
  Init_CollectImage_Response_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::juno_interfaces::srv::CollectImage_Response count(::juno_interfaces::srv::CollectImage_Response::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::juno_interfaces::srv::CollectImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::juno_interfaces::srv::CollectImage_Response>()
{
  return juno_interfaces::srv::builder::Init_CollectImage_Response_count();
}

}  // namespace juno_interfaces

#endif  // JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__BUILDER_HPP_
