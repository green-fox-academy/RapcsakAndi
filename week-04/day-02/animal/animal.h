
#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <iostream>

class Animal {

private:
    std::string _name;
    int _hunger;
    int _thirst;

public:
    Animal(std::string name);

    std::string getName();

    int getHunger();

    int getThirst();

    void eat();

    void drink();

    void play();

};



#endif //ANIMAL_ANIMAL_H
