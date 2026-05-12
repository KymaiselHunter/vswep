#include "Logger.hpp"
#include <iostream>

void Logger::update(const std::string& message)
{
    std::cout << message << std::endl;
}