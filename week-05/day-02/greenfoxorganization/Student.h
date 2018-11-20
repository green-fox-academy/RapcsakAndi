#ifndef GREENFOXORGANIZATION_STUDENT_H
#define GREENFOXORGANIZATION_STUDENT_H

#include <iostream>

class Student : public Person {
private:
    std::string _previousOrganization;
    int _skippedDays;
public:
    Student(std::string previousOrganization);
    void getGoal();
    void introduce();
    int skippedDays(numberOfDays);

};


#endif //GREENFOXORGANIZATION_STUDENT_H
