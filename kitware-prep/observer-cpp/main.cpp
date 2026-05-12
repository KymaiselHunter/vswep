#include <iostream>

#include "Observer.hpp"
#include "Logger.hpp"
#include "Subject.hpp"

#include <string>

int main()
{
    // Subject subject;
    // Logger logger;

    // subject.attach(&logger);
    
    // subject.notify("system updated");
    // subject.notify("new event");

    // subject.detach(&logger);
    // subject.notify("this should not print");
    // Subject<std::string> subject;
    // Logger logger;

    // subject.attach(&logger);

    // subject.set_value("online");
    // subject.set_value("offline");

    // subject.detach(&logger);

    // subject.set_value("maintenance");
    Subject<int> subject;
    Logger logger;

    subject.attach(&logger);

    subject.set_value(1);
    subject.set_value(2);

    subject.detach(&logger);

    subject.set_value(3);
}