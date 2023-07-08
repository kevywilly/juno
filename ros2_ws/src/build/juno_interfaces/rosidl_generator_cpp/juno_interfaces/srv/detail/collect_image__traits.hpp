// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from juno_interfaces:srv/CollectImage.idl
// generated code does not contain a copyright notice

#ifndef JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__TRAITS_HPP_
#define JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "juno_interfaces/srv/detail/collect_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace juno_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CollectImage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: category
  {
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << "\n";
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CollectImage_Request & msg, bool use_flow_style = false)
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
  const juno_interfaces::srv::CollectImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  juno_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use juno_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const juno_interfaces::srv::CollectImage_Request & msg)
{
  return juno_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<juno_interfaces::srv::CollectImage_Request>()
{
  return "juno_interfaces::srv::CollectImage_Request";
}

template<>
inline const char * name<juno_interfaces::srv::CollectImage_Request>()
{
  return "juno_interfaces/srv/CollectImage_Request";
}

template<>
struct has_fixed_size<juno_interfaces::srv::CollectImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<juno_interfaces::srv::CollectImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<juno_interfaces::srv::CollectImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace juno_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CollectImage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CollectImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const CollectImage_Response & msg, bool use_flow_style = false)
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
  const juno_interfaces::srv::CollectImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  juno_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use juno_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const juno_interfaces::srv::CollectImage_Response & msg)
{
  return juno_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<juno_interfaces::srv::CollectImage_Response>()
{
  return "juno_interfaces::srv::CollectImage_Response";
}

template<>
inline const char * name<juno_interfaces::srv::CollectImage_Response>()
{
  return "juno_interfaces/srv/CollectImage_Response";
}

template<>
struct has_fixed_size<juno_interfaces::srv::CollectImage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<juno_interfaces::srv::CollectImage_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<juno_interfaces::srv::CollectImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<juno_interfaces::srv::CollectImage>()
{
  return "juno_interfaces::srv::CollectImage";
}

template<>
inline const char * name<juno_interfaces::srv::CollectImage>()
{
  return "juno_interfaces/srv/CollectImage";
}

template<>
struct has_fixed_size<juno_interfaces::srv::CollectImage>
  : std::integral_constant<
    bool,
    has_fixed_size<juno_interfaces::srv::CollectImage_Request>::value &&
    has_fixed_size<juno_interfaces::srv::CollectImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<juno_interfaces::srv::CollectImage>
  : std::integral_constant<
    bool,
    has_bounded_size<juno_interfaces::srv::CollectImage_Request>::value &&
    has_bounded_size<juno_interfaces::srv::CollectImage_Response>::value
  >
{
};

template<>
struct is_service<juno_interfaces::srv::CollectImage>
  : std::true_type
{
};

template<>
struct is_service_request<juno_interfaces::srv::CollectImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<juno_interfaces::srv::CollectImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // JUNO_INTERFACES__SRV__DETAIL__COLLECT_IMAGE__TRAITS_HPP_
