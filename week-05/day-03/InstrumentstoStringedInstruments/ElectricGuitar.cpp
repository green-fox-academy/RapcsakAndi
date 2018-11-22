#include "ElectricGuitar.h"
#include "StringedInstrument.h"

ElectricGuitar::ElectricGuitar() : ElectricGuitar(6){

}
ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument(numberOfStrings){
    _name = "Electric guitar";
}
std::string ElectricGuitar::sound() {
    return "twang";
}
