#include <iostream>
#include <string>
#include "rclcpp/publisher.hpp"
#include "rclcpp/node.hpp"
#include "rclcpp/exceptions.hpp"
#include "rclcpp/externs.hpp"
#include "rclcpp/msg_type.hpp"

using rclcpp::Msg_Type;
using rclcpp::Node;
using rclcpp::Publisher;
using rclcpp::exceptions::RCLError;

// constructor
template <typename MessageT>
Publisher<MessageT>::Publisher(Node *node, const std::string &topic_name)
    : node(node),
      topic_name(topic_name)
{
    int ret;
    ret = _create_publisher(node->get_id(), topic_name.c_str(),Msg_Type::std_msgs_msg_String);
    if (ret == -1)
    {
        std::cout << "[error] Publisher constructor: " << ret << std::endl;
        throw RCLError();
    }
    else
    {
        this->id = ret;
    }
}

// constructor
template <>
Publisher<std_msgs::msg::String>::Publisher(Node *node, const std::string &topic_name)
    : node(node),
      topic_name(topic_name)
{
    int ret;
    ret = _create_publisher(node->get_id(), topic_name.c_str(),Msg_Type::std_msgs_msg_String);
    if (ret == -1)
    {
        std::cout << "[error] Publisher constructor: " << ret << std::endl;
        throw RCLError();
    }
    else
    {
        this->id = ret;
    }
}

// publish
template<>
void Publisher<std_msgs::msg::String>::publish(const std_msgs::msg::String &msg)
{
    _publish_std_msgs_msg_String(this->node->get_id(), this->id, msg.data.c_str());
}
