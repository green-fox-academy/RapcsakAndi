#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"

Person::Person(std::string name, int age, std::string gender){
    _name = name;
    _age = age;
    _gender = gender;
}
std::string Person::getName(){
    return _name;
}
int Person::getAge(){
    return _age;
}

std::string Person::getGender(){
    return _gender;
}
void Person::introduce(std::string name, int age, std::string gender){
    std::cout<<"Hi, I'm "<<name<<", a "<<age<<" year old "<<gender<<"."<<std::endl;
}
void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}