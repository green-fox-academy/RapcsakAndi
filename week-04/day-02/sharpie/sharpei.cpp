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

int Shaprei::getWidth() {
    return _width;
}
int Sharpei::getInkAmount(){
    return _thirst;
}

void Animal::eat(){
    _hunger--;
}
void Animal::drink(){
    _thirst--;
}
void Animal::play(){
    _hunger++;
    _thirst++;

}
