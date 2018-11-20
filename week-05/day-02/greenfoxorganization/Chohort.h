#ifndef GREENFOXORGANIZATION_CHOHORT_H
#define GREENFOXORGANIZATION_CHOHORT_H

#include <iostream>
#include <vector>


class Chohort {
private:
    std::string _name;
    std::vector<std::string> students;
    std::vector<std::string> mentors;
public:
    int addStudent(Student*);
    int addMentor(Mentor*);
    void info();
};


#endif //GREENFOXORGANIZATION_CHOHORT_H
