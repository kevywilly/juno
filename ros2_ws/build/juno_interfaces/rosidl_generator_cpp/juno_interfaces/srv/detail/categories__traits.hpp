// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from juno_interfaces:srv/Categories.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__TRAITS_HPP_
#define JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "juno_interfaces/srv/detail/categories__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace juno_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Categories_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Categories_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Categories_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace juno_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use juno_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const juno_interfaces::srv::Categories_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  juno_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use juno_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const juno_interfaces::srv::Categories_Request & msg)
{
  return juno_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<juno_interfaces::srv::Categories_Request>()
{
  return "juno_interfaces::srv::Categories_Request";
}

template<>
inline const char * name<juno_interfaces::srv::Categories_Request>()
{
  return "juno_interfaces/srv/Categories_Request";
}

template<>
struct has_fixed_size<juno_interfaces::srv::Categories_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<juno_interfaces::srv::Categories_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<juno_interfaces::srv::Categories_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'categories'
#include "juno_interfaces/msg/detail/category__traits.hpp"

namespace juno_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Categories_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: categories
  {
    if (msg.categories.size() == 0) {
      out << "categories: []";
    } else {
      out << "categories: [";
      size_t pending_items = msg.categories.size();
      for (auto item : msg.categories) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Categories_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: categories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.categories.size() == 0) {
      out << "categories: []\n";
    } else {
      out << "categories:\n";
      for (auto item : msg.categories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Categories_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace juno_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use juno_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const juno_interfaces::srv::Categories_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  juno_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use juno_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const juno_interfaces::srv::Categories_Response & msg)
{
  return juno_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<juno_interfaces::srv::Categories_Response>()
{
  return "juno_interfaces::srv::Categories_Response";
}

template<>
inline const char * name<juno_interfaces::srv::Categories_Response>()
{
  return "juno_interfaces/srv/Categories_Response";
}

template<>
struct has_fixed_size<juno_interfaces::srv::Categories_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<juno_interfaces::srv::Categories_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<juno_interfaces::srv::Categories_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juno_interfaces::srv::Categories>()
{
  return "juno_interfaces::srv::Categories";
}

template<>
inline const char * name<juno_interfaces::srv::Categories>()
{
  return "juno_interfaces/srv/Categories";
}

template<>
struct has_fixed_size<juno_interfaces::srv::Categories>
  : std::integral_constant<
    bool,
    has_fixed_size<juno_interfaces::srv::Categories_Request>::value &&
    has_fixed_size<juno_interfaces::srv::Categories_Response>::value
  >
{
};

template<>
struct has_bounded_size<juno_interfaces::srv::Categories>
  : std::integral_constant<
    bool,
    has_bounded_size<juno_interfaces::srv::Categories_Request>::value &&
    has_bounded_size<juno_interfaces::srv::Categories_Response>::value
  >
{
};

template<>
struct is_service<juno_interfaces::srv::Categories>
  : std::true_type
{
};

template<>
struct is_service_request<juno_interfaces::srv::Categories_Request>
  : std::true_type
{
};

template<>
struct is_service_response<juno_interfaces::srv::Categories_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // JUNO_INTERFACES__SRV__DETAIL__CATEGORIES__TRAITS_HPP_
