#include "Sponsor.h"
#include "Person.h"

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company): Person (name, age, gender){
    _company = company;
    _hiredStudents = 0;
}
Sponsor::Sponsor(): Person(){
    _company = "Google";
    _hiredStudents = 0;

}
void Sponsor::introduce(){
    std::cout<<"Hi, I'm "<<_name<<", a "<<_age<<" year old "<<genderToString()<<" who represents "<<_company<<" and hired "<<_hiredStudents<<" students so far."<<std::endl;
}
void Sponsor::hire(){
    _hiredStudents++;
}
void Sponsor::getGoal(){
    std::cout<<"My goal is: Hire brilliant junior software developers."<<std::endl;
}