#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <string>

class Observer
{
    public:
        virtual void update(const std::string& message) = 0;
};

#endif