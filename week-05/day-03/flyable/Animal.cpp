#include "Animal.h"
#include "Flyable.h"
#include <iostream>

Animal::Animal(){}

Animal::Animal(std::string name){
    _name = name;

}
void Animal::loveLife(){
    std::cout<<"I live my life, because I can fly"<<std::endl;
}
