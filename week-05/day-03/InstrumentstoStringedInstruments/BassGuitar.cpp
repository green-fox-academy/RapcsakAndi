#include "BassGuitar.h"
#include "StringedInstrument.h"

BassGuitar::BassGuitar() : BassGuitar(4){}
BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings){
    _name = "Bass guitar";
}
std::string BassGuitar::sound() {
    return "Duum-duum-duum";
}