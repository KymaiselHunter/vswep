#include "Subject.hpp"
#include <sstream>

template <typename T>
void Subject<T>::attach(Observer* observer)
{
    observers.insert(observer);
}

template <typename T>
void Subject<T>::detach(Observer* observer)
{
    observers.erase(observer);
}

template <typename T>
void Subject<T>::notify(const std::string& message)
{
    std::ostringstream oss;
    oss << message << "\nThe current value is " << value;

    for (Observer* observer : observers)
    {
        observer->update(oss.str());
    }
}

template <typename T>
void Subject<T>::set_value(const T& value)
{
    this->value = value;
    notify("New Value");
}

template class Subject<std::string>;
template class Subject<int>;