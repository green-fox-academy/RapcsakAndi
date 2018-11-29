#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include "Flyable.h"
#include "Vehicle.h"



class Helicopter : public Flyable, public Vehicle {
public:
    Helicopter(std::string name);
    virtual void takeOff() override;
    virtual void fly() override;
    virtual void land() override;


};


#endif //FLYABLE_HELICOPTER_H
