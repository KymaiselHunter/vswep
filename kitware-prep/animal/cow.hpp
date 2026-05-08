#ifndef COW_HPP
#define COW_HPP

#include "animal.hpp"
#include <string>

class Cow : public Animal
{
    public:
        void speak() const override;
        std::string getName() const override;
};
#endif // COW