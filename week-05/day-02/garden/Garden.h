#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include "Plant.h"
#include <vector>

class Garden {
private:
    std::vector<Plant*> _plants;
    int _needsWater = 0;
public:
    Garden();
    void fillGarden(Plant* plant);
    void watering(float waterAmount);
    void checkThirstyPlants();
};


#endif //GARDEN_GARDEN_H
