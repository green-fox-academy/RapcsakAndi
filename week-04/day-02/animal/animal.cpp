#include "animal.h"


Animal::Animal(std::string name)
{
    _name = name;
    _hunger = 50;
    _thirst = 50;

}
std::string Animal::getName(){
    return _name;
}

int Animal::getHunger() {
    return _hunger;
}
int Animal::getThirst(){
    return _thirst;
}

void Animal::eat(){
    _hunger--;
}
void Animal::drink(){
    _thirst--;
}
void Animal::play(){
    _hunger++;
    _thirst++;

}
