// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <string>
#include <random>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#define MAX_1 10000
#define MAX_2 20000
#define MAX_3 30000
#define MAX_4 40000
#define MAX_5 50000
#define MAX_6 60000
#define MAX_7 70000
#define MAX_8 80000
#define MAX_9 90000
#define MAX_10 100000

#define MSG_1 256
#define MSG_2 512
#define MSG_3 1024
#define MSG_4 2048
#define MSG_5 4096

using namespace std::chrono_literals;

/* We do not recommend this style anymore, because composition of multiple
 * nodes in the same executable is not possible. Please see one of the subclass
 * examples for the "new" recommended styles. This example is only included
 * for completeness because it is similar to "classic" standalone ROS nodes. */

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  std::random_device rnd;
  std::string node_name = "minimal_publisher" + std::to_string(rnd());
  auto node = rclcpp::Node::make_shared(node_name);
  auto publisher = node->create_publisher<std_msgs::msg::String>("topic", 10);
  std_msgs::msg::String message;
  std::string data(MSG_1, 'a');
  // rclcpp::WallRate loop_rate(500ms);

  std::cout << "Start Publishing:" <<node_name<< std::endl;
  
  for (int i = 0; rclcpp::ok() && i < MAX_1; i++)
  {
    message.data = data;
    // RCLCPP_INFO(node->get_logger(), "Publishing: '%s'", message.data.c_str());
    try
    {
      publisher->publish(message);
      rclcpp::spin_some(node);
    }
    catch (const rclcpp::exceptions::RCLError &e)
    {
      std::cout << "Error" << std::endl;
      /*RCLCPP_ERROR(
        node->get_logger(),
        "unexpectedly failed with %s",
        e.what());*/
    }
    // loop_rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}
