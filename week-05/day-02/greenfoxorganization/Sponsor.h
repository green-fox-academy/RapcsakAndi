#ifndef GREENFOXORGANIZATION_SPONSOR_H
#define GREENFOXORGANIZATION_SPONSOR_H

#include <iostream>
#include "Person.h"


class Sponsor : public Person {
private:
    std::string _company;
    int _hiredStudents;
public:
    Sponsor(std::string name, int age, Gender gender, std::string company);

    Sponsor();

    void introduce() override;

    void hire();

    void getGoal()override;

};
#endif //GREENFOXORGANIZATION_SPONSOR_H
