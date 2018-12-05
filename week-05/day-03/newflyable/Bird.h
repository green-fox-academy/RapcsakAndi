#ifndef NEWFLYABLE_BIRD_H
#define NEWFLYABLE_BIRD_H

#include "Animal.h"
#include "Flyable.h"
#include <iostream>

class Bird : public Animal, public Flyable
{
public:
    Bird();
    virtual void breed() override;
};


#endif //NEWFLYABLE_BIRD_H
