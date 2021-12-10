// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/Int32.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT32__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__INT32__TRAITS_HPP_

#include "std_msgs/msg/detail/int32__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const std_msgs::msg::Int32 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const std_msgs::msg::Int32 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<std_msgs::msg::Int32>()
{
  return "std_msgs::msg::Int32";
}

template<>
inline const char * name<std_msgs::msg::Int32>()
{
  return "std_msgs/msg/Int32";
}

template<>
struct has_fixed_size<std_msgs::msg::Int32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<std_msgs::msg::Int32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<std_msgs::msg::Int32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__INT32__TRAITS_HPP_
