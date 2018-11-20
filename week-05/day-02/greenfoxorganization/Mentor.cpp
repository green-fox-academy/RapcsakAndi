#include "Mentor.h"
#include "Person.h"
#include "Mentor.h"

Mentor::Mentor(std::string level, std::string name, int age, std::string gender)
{
    _name = name;
    _age = age;
    _gender = gender;
    _level = level;
}

std::string Mentor::getLevel(){
    return _level;
}
void Mentor::getGoal(){
    std::cout<<"My goal is: Educate brilliant junior software developers."<<std::endl;
}
void Mentor::introduce(){
    std::cout<< "Hi, I'm "<<_name<<", a "<<_age<< "year old "<<_gender<< _level<< "mentor."<<std::endl;
}