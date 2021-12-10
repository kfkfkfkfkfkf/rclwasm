// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/Int64MultiArray.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY__TRAITS_HPP_

#include "std_msgs/msg/detail/int64_multi_array__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'layout'
#include "std_msgs/msg/detail/multi_array_layout__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const std_msgs::msg::Int64MultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: layout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layout:\n";
    to_yaml(msg.layout, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const std_msgs::msg::Int64MultiArray & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<std_msgs::msg::Int64MultiArray>()
{
  return "std_msgs::msg::Int64MultiArray";
}

template<>
inline const char * name<std_msgs::msg::Int64MultiArray>()
{
  return "std_msgs/msg/Int64MultiArray";
}

template<>
struct has_fixed_size<std_msgs::msg::Int64MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_msgs::msg::Int64MultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_msgs::msg::Int64MultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__INT64_MULTI_ARRAY__TRAITS_HPP_
