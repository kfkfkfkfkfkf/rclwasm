#ifndef RATE_HPP_
#define RATE_HPP_

#include <chrono>

namespace rclcpp
{
    class WallRate
    {
    private:
        std::chrono::milliseconds period;

    public:
        WallRate(std::chrono::milliseconds period) : period(period){};
        void sleep(void);
    };
}

#endif // RATE_HPP_