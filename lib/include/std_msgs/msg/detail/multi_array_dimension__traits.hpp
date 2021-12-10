// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/MultiArrayDimension.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__TRAITS_HPP_

#include "std_msgs/msg/detail/multi_array_dimension__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const std_msgs::msg::MultiArrayDimension & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: stride
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stride: ";
    value_to_yaml(msg.stride, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const std_msgs::msg::MultiArrayDimension & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<std_msgs::msg::MultiArrayDimension>()
{
  return "std_msgs::msg::MultiArrayDimension";
}

template<>
inline const char * name<std_msgs::msg::MultiArrayDimension>()
{
  return "std_msgs/msg/MultiArrayDimension";
}

template<>
struct has_fixed_size<std_msgs::msg::MultiArrayDimension>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_msgs::msg::MultiArrayDimension>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_msgs::msg::MultiArrayDimension>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__MULTI_ARRAY_DIMENSION__TRAITS_HPP_
