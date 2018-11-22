#include "StringedInstrument.h"
#include "Instrument.h"

#include <iostream>

StringedInstrument::StringedInstrument(int numberOfStrings){
    _numberOfStrings = numberOfStrings;
}

void StringedInstrument::play(){
    std::cout<<_name<<", a "<<_numberOfStrings<<"-stringed instrument that goes "<<sound()<<std::endl;
}

