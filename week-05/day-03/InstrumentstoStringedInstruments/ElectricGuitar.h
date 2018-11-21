#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"


class ElectricGuitar : public StringedInstrument {
public:
    ElectricGuitar(int numberOfStrings);
    void sound () override;
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_ELECTRICGUITAR_H
