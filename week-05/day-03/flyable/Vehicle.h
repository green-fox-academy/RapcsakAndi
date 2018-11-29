#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H

#include "Flyable.h"

#include <iostream>


class Vehicle {
protected:
    std::string _name;
    int _wheelsNumber;
    std::string _color;
public:
    Vehicle(std::string name);
    Vehicle();

};


#endif //FLYABLE_VEHICLE_H
