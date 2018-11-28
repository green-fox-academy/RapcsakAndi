#include "Tree.h"
#include <iostream>

void Tree::watering(float water){
    _waterAmount += water * 0.4;
}
Tree::Tree(float waterAmount, std::string color) {
    _waterAmount = waterAmount;
    _color = color;
    if(_waterAmount<10){
        _needsWater = true;
    }else
        _needsWater = false;

    std::cout<<_waterAmount<<" "<<_color<<std::endl;
}