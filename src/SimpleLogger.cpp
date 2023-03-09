#include "SimpleLogger.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>

SimpleLogger::SimpleLogger()
{
}

void SimpleLogger::log(std::string_view message) noexcept
{
    const auto now_time_t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << std::put_time(std::localtime(&now_time_t), "[%Y-%m-%d %H:%M:%S] ") << message << std::endl;
}