#ifndef GARDEN_FLOWER_H
#define GARDEN_FLOWER_H

#include "Plant.h"


class Flower : public Plant{
public:
    Flower(float waterAmount, std::string color);
    void watering(float water) override;
};


#endif //GARDEN_FLOWER_H
