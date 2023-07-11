// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from juno_interfaces:srv/Toggle.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__TOGGLE__BUILDER_HPP_
#define JUNO_INTERFACES__SRV__DETAIL__TOGGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "juno_interfaces/srv/detail/toggle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace juno_interfaces
{

namespace srv
{

namespace builder
{

class Init_Toggle_Request_on
{
public:
  Init_Toggle_Request_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::juno_interfaces::srv::Toggle_Request on(::juno_interfaces::srv::Toggle_Request::_on_type arg)
  {
    msg_.on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::juno_interfaces::srv::Toggle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::juno_interfaces::srv::Toggle_Request>()
{
  return juno_interfaces::srv::builder::Init_Toggle_Request_on();
}

}  // namespace juno_interfaces


namespace juno_interfaces
{

namespace srv
{

namespace builder
{

class Init_Toggle_Response_status
{
public:
  Init_Toggle_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::juno_interfaces::srv::Toggle_Response status(::juno_interfaces::srv::Toggle_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::juno_interfaces::srv::Toggle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::juno_interfaces::srv::Toggle_Response>()
{
  return juno_interfaces::srv::builder::Init_Toggle_Response_status();
}

}  // namespace juno_interfaces

#endif  // JUNO_INTERFACES__SRV__DETAIL__TOGGLE__BUILDER_HPP_
