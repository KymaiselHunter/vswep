#ifndef LOGGER_HPP
#define LOGGER_HPP

#include "Observer.hpp"

class Logger : public Observer
{
    public:
        virtual void update(const std::string& message) override;
};
#endif