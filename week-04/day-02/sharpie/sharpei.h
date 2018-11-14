#ifndef SHARPIE_SHARPEI_H
#define SHARPIE_SHARPEI_H

#include <iostream>

class Sharpei {

private:
    std::string _color;
    float _width;
    float _inkAmount;

public:
    Sharpei(std::string color, float width);

    std::string getColor();

    float getWidth();

    float getInkAmount();

    void use();


};


#endif //SHARPIE_SHARPEI_H
