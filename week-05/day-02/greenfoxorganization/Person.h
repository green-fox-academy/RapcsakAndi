#ifndef GREENFOXORGANIZATION_PERSON_H
#define GREENFOXORGANIZATION_PERSON_H

#include <iostream>

enum class Gender{
    MALE,
    FEMALE
};
enum class LEVEL{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Person {
private:
    std::string _name;
    int _age;
    std::string _gender;
public:
    Person(std::string name);

    std::string getName;

    int getAge;

    std::string getGender;

    void introduce(std::string name, int age, std::string gender);

    void getGoal();
};


#endif //GREENFOXORGANIZATION_PERSON_H
