#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H

#include "Flyable.h"

#include <iostream>


class Vehicle : public Flyable {
public:
    std::string _name;
    int _wheelsNumber;
    std::string _color;
    Vehicle(std::string name);

};


#endif //FLYABLE_VEHICLE_H
