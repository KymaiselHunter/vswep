#include <iostream>

#include "Observer.hpp"
#include "Logger.hpp"
#include "Subject.hpp"

int main()
{
    Subject subject;
    Logger logger;

    subject.attach(&logger);
    
    subject.notify("system updated");
    subject.notify("new event");

    subject.detach(&logger);
    subject.notify("this should not print");
}