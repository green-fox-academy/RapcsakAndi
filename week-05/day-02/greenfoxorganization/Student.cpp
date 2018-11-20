#include "Student.h"
#include "Person.h"
#include "Chohort.h"

class Student{
    _previousOrganization = previousOrganization;
    _skippedDays = skippedDays;
};

void getGoal(){
    std::cout<<"My goal is: Be a junior software developer."<<std::endl;
};
void introduce(){
    std::cout<<"Hi, I'm "<<name<<", a "<<age<<" year old "<<gender<<" from "<<previousOrganization<<" who skipped "<<skippedDays<<" days from the course already."<<std::endl;
};
int skippedDays(numberOfDays){
    return skippedDays*numberOfDays;
};