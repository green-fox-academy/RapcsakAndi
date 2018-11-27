#ifndef GARDEN_PLANT_H
#define GARDEN_PLANT_H

#include <iostream>

class Plant {
public:
    Plant(std::string color, std::string plant);
    std::string _color;
    std::string _plant;
    bool needsWater;
    void getWater();

};


#endif //GARDEN_PLANT_H
