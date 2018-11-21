#ifndef GREENFOXORGANIZATION_PERSON_H
#define GREENFOXORGANIZATION_PERSON_H

#include <iostream>

enum class Gender{
    MALE,
    FEMALE
};

class Person {
protected:
    std::string _name;
    int _age;
    Gender _gender;

public:
    Person();

    Person(std::string name, int age, Gender gender);

    virtual void introduce();

    virtual void getGoal();

    std::string genderToString();


};


#endif //GREENFOXORGANIZATION_PERSON_H
