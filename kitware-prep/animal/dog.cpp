#include "dog.hpp"
#include <iostream>

void Dog::speak() const
{
    std::cout << "Bark" << std::endl;
}

std::string Dog::getName() const
{
    return "Dog";
}