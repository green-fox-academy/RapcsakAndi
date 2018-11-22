#include "Bird.h"
#include "animal.h"

Bird::Bird(std::string name) : Animal(name){}

std::string Bird::breed(){
    return "lying eggs.";
}
std::string Bird::getName() {
    return _name;
}