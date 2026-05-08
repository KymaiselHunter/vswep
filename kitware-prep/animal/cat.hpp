#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include <string>

class Cat : public Animal
{
    public:
        void speak() const override;
        std::string getName() const override;
};
#endif