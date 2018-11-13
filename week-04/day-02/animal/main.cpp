/*Create an Animal class
Every animal has a hunger value, which is a whole number
Every animal has a thirst value, which is a whole number
when creating a new animal object these values are created with the default 50 value
Every animal can eat() which decreases their hunger by one
Every animal can drink() which decreases their thirst by one
Every animal can play() which increases both by one*/

#include <iostream>
#include "animal.h"

class Animal;
int main() {
    std::string name;
    std::cout<<"Enter an animal: "<<std::endl;
    std::cin>>name;

    Animal animal(name);
    std::cout<<name <<" "<< animal.getHunger()<<" "<<animal.getThirst()<<std::endl;
    animal.play();
    std::cout<<name <<" "<< animal.getHunger()<<" "<<animal.getThirst()<<std::endl;
    animal.eat();
    std::cout<<name <<" "<< animal.getHunger()<<" "<<animal.getThirst()<<std::endl;

    return 0;
}
