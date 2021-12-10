#include <iostream>
#include "rclcpp/rate.hpp"
#include "rclcpp/externs.hpp"

using rclcpp::WallRate;

void WallRate::sleep(void)
{
    int milisec = this->period.count();
    _sleep(milisec);
}