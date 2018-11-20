#ifndef GREENFOXORGANIZATION_SPONSOR_H
#define GREENFOXORGANIZATION_SPONSOR_H

#include <iostream>
#include "Person.h"


class Sponsor : public Person {
private:
    std::string _company;
    int _hiredStudents;
public:
    void introduce();

    void hire();

    void getGoal();

};
#endif //GREENFOXORGANIZATION_SPONSOR_H
