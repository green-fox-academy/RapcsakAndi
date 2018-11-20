#ifndef GREENFOXORGANIZATION_MENTOR_H
#define GREENFOXORGANIZATION_MENTOR_H

#include <iostream>

class Mentor {
private:
    std::string _level;
    std::string _name;
    int _age;
    std::string _gender;

public:
    Mentor(std::string level);
    void getGoal();
    void introduce();
};


#endif //GREENFOXORGANIZATION_MENTOR_H
