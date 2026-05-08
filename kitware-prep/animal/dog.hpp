#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
    public:
        void speak() const override;
        std::string getName() const override;
};
#endif