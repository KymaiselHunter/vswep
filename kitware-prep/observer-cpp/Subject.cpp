#include "Subject.hpp"

void Subject::attach(Observer* observer)
{
    observers.insert(observer);
}

void Subject::detach(Observer* observer)
{
    observers.erase(observer);
}

void Subject::notify(const std::string& messsage)
{
    for(Observer*  observer : observers)
    {
        observer->update(messsage);
    }
}