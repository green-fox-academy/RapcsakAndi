#include "Chohort.h"
#include "Mentor.h"
#include "Student.h"

#include <iostream>

Chohort::Chohort(std::string name, std::vector<std::string> students, std::vector<std::string> mentors)
{
    _name = name;
    _students = students;
    _mentors = mentors;
}
int addStudent(Student*);

int addMentor(Mentor*);

void info(){
 std::cout<<"The name cohort has "<<students.size()<<"" ""<<students<<" and "<<mentors.size()<<" "<<mentors<<"."<<std::endl;
}
