#ifndef FLYABLE_ANIMAL_H
#define FLYABLE_ANIMAL_H

#include "Flyable.h"
#include <iostream>

class Animal: public Flyable {
public:
    std::string _name;
    Animal(std::string name);
};


#endif //FLYABLE_ANIMAL_H
