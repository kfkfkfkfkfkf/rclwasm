// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from std_msgs:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__TRAITS_HPP_
#define STD_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__TRAITS_HPP_

#include "std_msgs/msg/detail/multi_array_layout__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'dim'
#include "std_msgs/msg/detail/multi_array_dimension__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const std_msgs::msg::MultiArrayLayout & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dim.size() == 0) {
      out << "dim: []\n";
    } else {
      out << "dim:\n";
      for (auto item : msg.dim) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: data_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_offset: ";
    value_to_yaml(msg.data_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const std_msgs::msg::MultiArrayLayout & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<std_msgs::msg::MultiArrayLayout>()
{
  return "std_msgs::msg::MultiArrayLayout";
}

template<>
inline const char * name<std_msgs::msg::MultiArrayLayout>()
{
  return "std_msgs/msg/MultiArrayLayout";
}

template<>
struct has_fixed_size<std_msgs::msg::MultiArrayLayout>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<std_msgs::msg::MultiArrayLayout>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<std_msgs::msg::MultiArrayLayout>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STD_MSGS__MSG__DETAIL__MULTI_ARRAY_LAYOUT__TRAITS_HPP_
