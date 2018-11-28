#include "Plant.h"

Plant::Plant(){}

bool Plant::getNeedsWater(){
    return _needsWater;
}
Plant::Plant(float waterAmount, std::string color){
    _waterAmount = waterAmount;
    _color = color;
    _needsWater = false;
}
float Plant::getWaterAmount(){
    return _waterAmount;
}

std::string Plant::getColor(){
    return _color;
}