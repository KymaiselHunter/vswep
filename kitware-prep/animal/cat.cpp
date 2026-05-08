#include "cat.hpp"
#include <iostream>

void Cat::speak() const
{
    std::cout << "Meow" << std::endl;
}

std::string Cat::getName() const
{
    return "Cat";
}