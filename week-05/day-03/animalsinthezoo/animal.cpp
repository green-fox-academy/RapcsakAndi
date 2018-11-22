#include "animal.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Bird.h"

Animal::Animal(std::string name) {
    _name = name;
    _age = 3;
    _gender = Gender::MALE;
}

Animal::Animal(std::string name, int age, Gender gender){
    _name = name;
    _age = age;
    _gender = gender;
}
void Animal::loveLife() {
    std::cout<<"I love my life"<<std::endl;
}