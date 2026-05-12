#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"
#include <unordered_set>
#include <string>

class Subject
{
    private:
        std::unordered_set<Observer*> observers;
        
    public:
        void attach(Observer * observer);
        void detach(Observer* observer);
        void notify(const std::string& message);

};

#endif