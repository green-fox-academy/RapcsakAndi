#ifndef NEWFLYABLE_VEHICLE_H
#define NEWFLYABLE_VEHICLE_H

#include <iostream>

class Vehicle
{
public:
    Vehicle(){}
    ~Vehicle(){}
    virtual void print() = 0;


    std::string _name;
    int _speed;
    unsigned int _direction;
};


#endif //NEWFLYABLE_VEHICLE_H
