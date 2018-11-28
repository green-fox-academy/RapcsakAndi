#include "Garden.h"
Garden::Garden(){}

void Garden::checkThirstyPlants(){
    int sum = 0;
    for (int i = 0; i <_plants.size() ; ++i) {
        if(_plants[i]->getNeedsWater())
        sum += 1;
    }
    _needsWater = sum;
}

void Garden::watering(float waterAmount){
    checkThirstyPlants();
    float equalAmount = waterAmount/_needsWater;
    for (int i = 0; i <_plants.size() ; ++i) {
        if(_plants[i]->getNeedsWater()){
        _plants[i]->watering(equalAmount);
        }
    }
    for (int j = 0; j <_plants.size() ; ++j) {
        std::cout<<_plants[j]->getWaterAmount()<<" "<<_plants[j]->getColor()<<std::endl;

    }
}
void Garden::fillGarden(Plant* plant){
    _plants.push_back(plant);
}