#ifndef ANIMALSINTHEZOO_ANIMAL_H
#define ANIMALSINTHEZOO_ANIMAL_H

#include <iostream>

enum class Gender{
    MALE,
    FEMALE
};

class Animal {
protected:
    std::string _name;
    int _age;
    Gender _gender;
public:
    Animal(std::string name);
    Animal(std::string name, int age, Gender gender);
    virtual std::string getName() = 0;
    virtual std::string breed() = 0;
    void loveLife();

};


#endif //ANIMALSINTHEZOO_ANIMAL_H
