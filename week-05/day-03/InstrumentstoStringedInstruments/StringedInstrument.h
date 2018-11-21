#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"
#include <iostream>


class StringedInstrument : public Instrument{
private:
    int numberOfStrings;
    virtual void sound() = 0;
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
