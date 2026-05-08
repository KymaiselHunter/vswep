#include <iostream>
#include "animal.hpp"
#include "dog.hpp"
#include "cow.hpp"
#include "cat.hpp"

#include <vector>

void print(const Animal* a)
{
    std::cout << "This is a " << a->getName() << 
    ", they make this noise:" << std::endl;
    a->speak();
}

int main()
{
    std::cout << "Hello Animal Kingdom" << std::endl;

    Dog d;
    d.speak();
    std::cout << d.getName() << std::endl;

    Cow cw;
    cw.speak();
    std::cout << cw.getName() << std::endl;

    Cat ct;
    ct.speak();
    std::cout << ct.getName() << std::endl;

    std::cout << "\nTest for abstraction" << std::endl;

    // std::vector<Animal*> animals;
    // Dog * dogP = new Dog();
    // animals.push_back(dogP);

    // animals.push_back(new Cow());
    // animals.push_back(new Cat());

    // for(int i = 0; i < animals.size(); i++)
    // {
    //     print(animals[i]);
    // }

    Dog dog;
    Cow cow;
    Cat cat;

    std::vector<Animal*> animals = {&dog, &cow, &cat};

    for (Animal* animal : animals) {
        print(animal);
    }
}
