
#include <iostream>
#include <memory>
#include "rclcpp/node.hpp"
#include "rclcpp/publisher.hpp"
#include "rclcpp/externs.hpp"

using rclcpp::Node;
using rclcpp::NodeOptions;
using rclcpp::Publisher;

Node::Node(const std::string &node_name,
           const NodeOptions &options)
    : Node(node_name, "", options){};

Node::Node(const std::string &node_name,
           const std::string &namespace_,
           const NodeOptions &options)
    : name(node_name),
      namespace_(namespace_)
{
    int ret;
    ret = _create_node(node_name.c_str(), namespace_.c_str());
    if (ret == -1)
    {
        std::cout << "[error] Node constructor: " << ret << std::endl;
    }
    else
    {
        this->id = ret;
    }
}

int Node::get_id(void)
{
    return this->id;
}

// create_publisher
template <>
Publisher<std_msgs::msg::String> *Node::create_publisher(const std::string &topic_name, int qos)
{
    return new Publisher<std_msgs::msg::String>(this, topic_name);
}