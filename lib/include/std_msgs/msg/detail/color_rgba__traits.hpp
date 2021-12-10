// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/ColorRGBA.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__COLOR_RGBA__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__COLOR_RGBA__TRAITS_HPP_

#include "std_msgs/msg/detail/color_rgba__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const std_msgs::msg::ColorRGBA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    value_to_yaml(msg.a, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const std_msgs::msg::ColorRGBA & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<std_msgs::msg::ColorRGBA>()
{
  return "std_msgs::msg::ColorRGBA";
}

template<>
inline const char * name<std_msgs::msg::ColorRGBA>()
{
  return "std_msgs/msg/ColorRGBA";
}

template<>
struct has_fixed_size<std_msgs::msg::ColorRGBA>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<std_msgs::msg::ColorRGBA>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<std_msgs::msg::ColorRGBA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__COLOR_RGBA__TRAITS_HPP_
