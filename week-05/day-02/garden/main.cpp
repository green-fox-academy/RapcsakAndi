#include <iostream>
#include "Garden.h"
#include "Plant.h"
#include "Tree.h"
#include "Flower.h"
#include <vector>

int main() {

    Tree fa1(9, "purple");
    Tree fa2(7, "green");
    Flower virag1(2, "yellow");
    Flower virag2(2, "red");

    Garden kert;
    kert.fillGarden(&fa1);
    kert.fillGarden(&fa2);
    kert.fillGarden(&virag1);
    kert.fillGarden(&virag2);

    kert.watering(4);
    kert.watering(20);
    std::cout << "------------------" << std::endl;
    kert.watering(20);
    return 0;
}