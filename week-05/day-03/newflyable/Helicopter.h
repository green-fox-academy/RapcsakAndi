#ifndef NEWFLYABLE_HELICOPTER_H
#define NEWFLYABLE_HELICOPTER_H

#include "Flyable.h"
#include "Vehicle.h"
#include <iostream>

class Helicopter : public Flyable, public Vehicle
{
public:
    Helicopter(std::string name, int speed = 0, unsigned int direction = 0){
        _name = name;
        _speed = speed;
        _direction = direction;
    }
    ~Helicopter(){}
    virtual void land() override
    {
        std::cout << "I can land" << std::endl;
    }
    virtual void takeOff() override {}
    virtual void fly () override {}
    virtual void print() override;
};


#endif //NEWFLYABLE_HELICOPTER_H
