#ifndef INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H

#include <iostream>


class Instrument {
protected:
    std::string _name;
public:
    Instrument(std::string name);
    virtual void play() = 0;
};


#endif //INSTRUMENTSTOSTRINGEDINSTRUMENTS_INSTRUMENT_H
