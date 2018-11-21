#include "Student.h"
#include "Person.h"
#include "Cohort.h"

Student::Student (std::string name, int age, Gender gender, std::string previousOrganization) : Person (name, age, gender){
    _previousOrganization = previousOrganization;
    _skippedDays = 0;
};
Student::Student() : Person(){
    _previousOrganization = "The School of Life";
    _skippedDays = 0;

}

void Student::getGoal(){
    std::cout<<"My goal is: Be a junior software developer."<<std::endl;
};
void Student::introduce(){
    std::cout<<"Hi, I'm "<<_name<<", a "<<_age<<" year old "<<genderToString()<<" from "<<_previousOrganization<<" who skipped "<<_skippedDays<<" days from the course already."<<std::endl;
};
void Student::skipDays(int numberOfDays){
    _skippedDays = _skippedDays+numberOfDays;
};