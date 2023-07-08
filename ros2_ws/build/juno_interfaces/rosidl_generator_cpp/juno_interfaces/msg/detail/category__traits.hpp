// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from juno_interfaces:msg/Category.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__MSG__DETAIL__CATEGORY__TRAITS_HPP_
#define JUNO_INTERFACES__MSG__DETAIL__CATEGORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "juno_interfaces/msg/detail/category__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace juno_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Category & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Category & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Category & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace juno_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use juno_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const juno_interfaces::msg::Category & msg,
  std::ostream & out, size_t indentation = 0)
{
  juno_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use juno_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const juno_interfaces::msg::Category & msg)
{
  return juno_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<juno_interfaces::msg::Category>()
{
  return "juno_interfaces::msg::Category";
}

template<>
inline const char * name<juno_interfaces::msg::Category>()
{
  return "juno_interfaces/msg/Category";
}

template<>
struct has_fixed_size<juno_interfaces::msg::Category>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<juno_interfaces::msg::Category>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<juno_interfaces::msg::Category>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JUNO_INTERFACES__MSG__DETAIL__CATEGORY__TRAITS_HPP_
