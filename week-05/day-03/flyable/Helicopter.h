#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include "Vehicle.h"


class Helicopter : public Flyable, Vehicle {
public:
    Helicopter(std::string name);
    void fly() override;

};


#endif //FLYABLE_HELICOPTER_H
