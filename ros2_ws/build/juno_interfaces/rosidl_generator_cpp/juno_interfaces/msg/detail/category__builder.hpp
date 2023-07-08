// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from juno_interfaces:msg/Category.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__MSG__DETAIL__CATEGORY__BUILDER_HPP_
#define JUNO_INTERFACES__MSG__DETAIL__CATEGORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "juno_interfaces/msg/detail/category__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace juno_interfaces
{

namespace msg
{

namespace builder
{

class Init_Category_count
{
public:
  explicit Init_Category_count(::juno_interfaces::msg::Category & msg)
  : msg_(msg)
  {}
  ::juno_interfaces::msg::Category count(::juno_interfaces::msg::Category::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::juno_interfaces::msg::Category msg_;
};

class Init_Category_name
{
public:
  Init_Category_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Category_count name(::juno_interfaces::msg::Category::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Category_count(msg_);
  }

private:
  ::juno_interfaces::msg::Category msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::juno_interfaces::msg::Category>()
{
  return juno_interfaces::msg::builder::Init_Category_name();
}

}  // namespace juno_interfaces

#endif  // JUNO_INTERFACES__MSG__DETAIL__CATEGORY__BUILDER_HPP_
