#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"
#include <iostream>


class Violin : public StringedInstrument {
public:
    Violin();
    Violin(int numberOfString);
protected:
    virtual std::string sound() override;

};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_VIOLIN_H
