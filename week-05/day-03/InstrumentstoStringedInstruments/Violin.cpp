#include "Violin.h"
#include "StringedInstrument.h"

Violin::Violin() : Violin(4){}

Violin::Violin(int numberOfStrings) : StringedInstrument(numberOfStrings){
    _name = "Violin";
}

std::string Violin::sound(){
    return "Screech";
}