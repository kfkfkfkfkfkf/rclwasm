#ifndef NODE_HPP_
#define NODE_HPP_
#include <string>
#include <vector>
#include <memory>
#include "rclcpp/node_options.hpp"
#include "rclcpp/publisher.hpp"

namespace rclcpp
{
    
    class Node : public std::enable_shared_from_this<Node>
    {
    private:
        std::string name;
        std::string namespace_;
        int id;

    public:
        template <typename... Args>
        static std::shared_ptr<Node>
        make_shared(Args &&...args)
        {
            return std::make_shared<Node>(std::forward<Args>(args)...);
        }

        Node(const std::string &node_name,
             const NodeOptions &options = NodeOptions());

        Node(const std::string &node_name,
             const std::string &namespace_,
             const NodeOptions &options = NodeOptions());

        int get_id(void);

        template <typename MessageT>
        Publisher<MessageT> *create_publisher(const std::string &topic_name, int qos);
    };
} // namespace rclcpp

#endif // NODE_HPP_