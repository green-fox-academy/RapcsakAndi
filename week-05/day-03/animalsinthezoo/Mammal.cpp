#include "Mammal.h"
#include "animal.h"

Mammal::Mammal(std::string name) : Animal(name){}

std::string Mammal::breed(){
    return "pushing miniature versions out.";
}
std::string Mammal::getName() {
    return _name;
}
