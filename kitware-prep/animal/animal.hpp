#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
    public:
        virtual void speak() const = 0;
        virtual std::string getName() const = 0;
        virtual ~Animal() = default;
};
#endif //Animal_Hpp