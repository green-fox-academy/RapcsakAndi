#ifndef GREENFOXORGANIZATION_CHOHORT_H
#define GREENFOXORGANIZATION_CHOHORT_H

#include "Student.h"
#include "Mentor.h"

#include <iostream>
#include <vector>


class Cohort {
private:
    std::string _name;
    std::vector<Student*> students;
    std::vector<Mentor*> mentors;
public:
    Cohort(std::string name);
    void addStudent(Student* student);
    void addMentor(Mentor* mentor);
    void info();
};


#endif //GREENFOXORGANIZATION_CHOHORT_H
