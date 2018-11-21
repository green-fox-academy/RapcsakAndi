#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"
#include <iostream>


class StringedInstrument : public Instrument{
protected:
    int numberOfStrings;

public:
    StringedInstrument(std::string name, int numberOfStrings);
    virtual void sound() = 0;
    void play () override;
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
