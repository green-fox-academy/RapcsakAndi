#ifndef GARDEN_TREE_H
#define GARDEN_TREE_H

#include "Plant.h"

class Tree : public Plant {
public:
    Tree(float waterAmount, std::string color);
    void watering(float water) override;
};


#endif //GARDEN_TREE_H
