#include "Person.h"
#include "Student.h"
#include "Mentor.h"
#include "Sponsor.h"

Person::Person(std::string name, int age, Gender gender){
    _name = name;
    _age = age;
    _gender = gender;
}
Person::Person(){
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}
void Person::introduce(){
    std::cout<<"Hi, I'm "<<_name<<", a "<<_age<<" year old "<<genderToString()<<"."<<std::endl;
}
void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}
std::string Person::genderToString(){
    if(_gender == Gender::MALE)
        return "male";
    else
        return "female";
}