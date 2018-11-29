#ifndef FLYABLE_ANIMAL_H
#define FLYABLE_ANIMAL_H

#include "Flyable.h"
#include <iostream>

class Animal: public Flyable {
protected:
    std::string _name;
    int _age;

public:
    Animal();
    Animal(std::string name);
    void loveLife();
    virtual std::string breed() = 0;
};


#endif //FLYABLE_ANIMAL_H
