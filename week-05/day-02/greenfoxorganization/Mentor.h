#ifndef GREENFOXORGANIZATION_MENTOR_H
#define GREENFOXORGANIZATION_MENTOR_H

#include <iostream>
#include "Person.h"

enum class Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
protected:
    Level _level;

public:
    Mentor(std::string name, int age, Gender gender, Level level);
    Mentor();
    void getGoal() override;
    void introduce() override;
    std::string levelToString();
};


#endif //GREENFOXORGANIZATION_MENTOR_H
