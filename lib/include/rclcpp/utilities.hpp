#ifndef UTILITIES_HPP_
#define UTILITIES_HPP_
#include <iostream>
#include "rclcpp/node.hpp"
#include "rclcpp/externs.hpp"

namespace rclcpp
{
    void init(int argc, char *argv[])
    {
        int ret = _init_context();
        if (ret == -1)
        {
            std::cout << "in wasm: " << ret << std::endl;
            exit(ret);
        }
    }
    bool ok()
    {
        // 未実装
        return true;
    }
    void spin_some(std::shared_ptr<Node> node){
        // 未実装
        return;
    }
    void shutdown(void){
        // 未実装
        return;
    }
} // namespace rclcpp

#endif // UTILITIES_HPP_