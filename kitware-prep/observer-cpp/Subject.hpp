#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"
#include <unordered_set>
#include <string>

template <typename T>
class Subject
{
    private:
        std::unordered_set<Observer*> observers;
        T value;
        
    public:
        void attach(Observer * observer);
        void detach(Observer* observer);
        void notify(const std::string& message);

        void set_value(const T& value);

};

#endif