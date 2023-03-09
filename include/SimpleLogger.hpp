#ifndef SIMPLE_LOGGER_HPP
#define SIMPLE_LOGGER_HPP

#include <string_view>

class SimpleLogger {
public:
    SimpleLogger();
    void log(std::string_view message) noexcept;
};

#endif // SIMPLE_LOGGER_HPP
