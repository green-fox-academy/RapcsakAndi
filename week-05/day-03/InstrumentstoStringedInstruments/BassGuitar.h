#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H

#include <iostream>
#include "StringedInstrument.h"


class BassGuitar : public StringedInstrument{
public:
    BassGuitar();
    BassGuitar(int numberOfStrings);
protected:
    virtual std::string sound() override;
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_BASSGUITAR_H
