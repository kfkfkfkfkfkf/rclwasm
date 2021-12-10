#ifndef PUBLISHER_HPP_
#define PUBLISHER_HPP_
#include <string>
#include "std_msgs/msg/string.hpp"

namespace rclcpp
{
    class Node;

    template <typename MessageT>
    class Publisher
    {
    private:
        Node *node;
        int id;
        std::string topic_name;

    public:
        Publisher(Node *node, const std::string &topic_name);
        void publish(const MessageT &msg);
    };
} // namespace rclcpp

#endif // PUBLISHER_HPP_