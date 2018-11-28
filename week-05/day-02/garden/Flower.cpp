#include "Flower.h"

void Flower::watering(float water){
    _waterAmount += water * 0.75;
}
Flower::Flower(float waterAmount, std::string color) {
    _waterAmount = waterAmount;
    _color = color;
    if(_waterAmount<5){
        _needsWater = true;
    }else
        _needsWater = false;

    std::cout<<_waterAmount<<" "<<_color<<std::endl;
}