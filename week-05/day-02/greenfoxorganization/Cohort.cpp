#include "Cohort.h"
#include "Mentor.h"
#include "Student.h"

#include <iostream>

Cohort::Cohort(std::string name)
{
    _name = name;
   }
void Cohort::addStudent(Student* student) {
    students.push_back(student);
}
void Cohort::addMentor(Mentor* mentor){
    mentors.push_back(mentor);
}
void Cohort::info(){
 std::cout<<"The "<<_name<<" cohort has "<<students.size()<<" students and "<<mentors.size()<<" mentors."<<std::endl;
}
