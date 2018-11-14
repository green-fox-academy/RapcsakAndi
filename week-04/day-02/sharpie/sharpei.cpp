#include "sharpei.h"

Sharpei::Sharpei(std::string color, float width)
{
    _color = color;
    _width = width;
    _inkAmount = 100;

}
std::string Sharpei::getColor(){
    return _color;
}

float Sharpei::getWidth() {
    return _width;
}
float Sharpei::getInkAmount(){
    return _inkAmount;
}

void Sharpei::use(){
    _inkAmount -=5;
}
