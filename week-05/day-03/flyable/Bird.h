#ifndef FLYABLE_BIRD_H
#define FLYABLE_BIRD_H

#include "Flyable.h"
#include "Animal.h"


class Bird : public Flyable, public Animal
{

public:
    Bird(std::string name);

    virtual void takeOff() override;

    virtual void land() override;

    virtual void fly() override;

    virtual std::string breed() override;
};


#endif //FLYABLE_BIRD_H
