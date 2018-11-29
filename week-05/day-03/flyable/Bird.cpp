#include "Bird.h"
#include "Animal.h"

Bird::Bird(std::string name){
    _name = name;
}

void Bird::takeOff(){
    std::cout<<"It is easy to me to take off"<<std::endl;
}
void Bird::land(){
    std::cout<<"I can land to a branch"<<std::endl;
}
void Bird::fly(){
    std::cout<<"I can fly near to the water"<<std::endl;
}
std::string Bird::breed(){
    std::cout<<"lying eggs"<<std::endl;
}