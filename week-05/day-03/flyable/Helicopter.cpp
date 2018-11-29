#include "Helicopter.h"
#include "Vehicle.h"

Helicopter::Helicopter(std::string name){
    _name = name;
}

void Helicopter::fly() {
    std::cout << "I can fly 4000 m high" << std::endl;
}
void Helicopter::land(){
    std::cout<<"Landing is not to easy"<<std::endl;
}
void Helicopter::takeOff(){
    std::cout <<"Wow, I can fly"<<std::endl;
}