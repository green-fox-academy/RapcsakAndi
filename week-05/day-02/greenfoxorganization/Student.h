#ifndef GREENFOXORGANIZATION_STUDENT_H
#define GREENFOXORGANIZATION_STUDENT_H

#include <iostream>
#include "Person.h"

class Student : public Person {
private:
    std::string _previousOrganization;
    int _skippedDays;
public:

    Student();
    Student(std::string name, int age, Gender gender, std::string previousOrganization);
    void getGoal() override;
    void introduce() override;
    void skipDays(int numberOfDays);

};


#endif //GREENFOXORGANIZATION_STUDENT_H
