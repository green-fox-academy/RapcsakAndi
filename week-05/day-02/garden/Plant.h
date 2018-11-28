#ifndef GARDEN_PLANT_H
#define GARDEN_PLANT_H

#include <iostream>

class Plant {
public:
    Plant();
    Plant(float waterAmount, std::string color);
    virtual void watering(float water) = 0;
    bool getNeedsWater();
    float getWaterAmount();
    std::string getColor();
protected:
    float _waterAmount;
    std::string _color;
    bool _needsWater;


};


#endif //GARDEN_PLANT_H
