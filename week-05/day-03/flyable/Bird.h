#ifndef FLYABLE_BIRD_H
#define FLYABLE_BIRD_H

#include "Flyable.h"
#include "Animal.h"


class Bird : public Flyable, Animal{
public:
    void takeOff() override;


};


#endif //FLYABLE_BIRD_H
