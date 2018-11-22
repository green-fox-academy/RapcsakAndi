#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"
#include <iostream>


class StringedInstrument : public Instrument{
protected:
    int _numberOfStrings;
    virtual std::string sound() = 0;
public:
    StringedInstrument(int numberOfStrings);
    void play () override;
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_STRINGEDINSTRUMENT_H
