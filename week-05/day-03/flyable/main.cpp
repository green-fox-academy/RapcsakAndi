#include <iostream>
#include "Flyable.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Helicopter.h"
#include "Bird.h"


int main() {

    Helicopter helicopter("bigone");
    helicopter.takeOff();
    helicopter.land();
    helicopter.fly();

    Bird bird("papagai");
    bird.takeOff();
    bird.fly();
    bird.land();


    return 0;
}