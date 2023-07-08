// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from juno_interfaces:srv/Categories.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__BUILDER_HPP_
#define JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "juno_interfaces/srv/detail/categories__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace juno_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::juno_interfaces::srv::Categories_Request>()
{
  return ::juno_interfaces::srv::Categories_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace juno_interfaces


namespace juno_interfaces
{

namespace srv
{

namespace builder
{

class Init_Categories_Response_categories
{
public:
  Init_Categories_Response_categories()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::juno_interfaces::srv::Categories_Response categories(::juno_interfaces::srv::Categories_Response::_categories_type arg)
  {
    msg_.categories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::juno_interfaces::srv::Categories_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::juno_interfaces::srv::Categories_Response>()
{
  return juno_interfaces::srv::builder::Init_Categories_Response_categories();
}

}  // namespace juno_interfaces

#endif  // JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__BUILDER_HPP_
