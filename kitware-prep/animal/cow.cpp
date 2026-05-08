#include "cow.hpp"
#include <iostream>

void Cow::speak() const
{
    std::cout << "Mooooo" << std::endl;
}

std::string Cow::getName() const
{
    return "Cow";
}