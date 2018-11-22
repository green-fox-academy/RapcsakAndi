#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H

#include <iostream>
#include "StringedInstrument.h"


class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar();
    ElectricGuitar(int numberOfStrings);
protected:
    virtual std::string sound () override;
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
