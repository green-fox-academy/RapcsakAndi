#include "Helicopter.h"
#include "Vehicle.h"

Helicopter::Helicopter(std::string name){
    _name = name;
}

void Vehicle::fly() {
    std::cout << "I can fly 4000 m high" << std::endl;
}