#include "Sponsor.h"
#include "Person.h"

Sponsor::Sponsor(std::string company, int hiredStudents){
    _company = company;
    _hiredStudents = hiredStudents;
}
void Sponsor::introduce(){
    std::cout<<"Hi, I'm "<<name<<", a "<<age<<" year old "<<gender<<" who represents "<<company<<" and hired "<<hiredStudents<<" students so far."
}
void Sponsor::hire(){
    hiredStudents++;
}
void Sponsor::getGoal(){
    std::cout<<"My goal is: Hire brilliant junior software developers."<<std::endl;
}