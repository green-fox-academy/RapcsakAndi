#include "Reptile.h"
#include "animal.h"

Reptile::Reptile(std::string name) : Animal(name){}

std::string Reptile::breed(){
    return "lying eggs.";
}
std::string Reptile::getName() {
    return _name;
}

