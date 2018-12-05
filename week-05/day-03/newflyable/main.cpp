#include <iostream>
#include "Flyable.h"
#include "Animal.h"
#include "Bird.h"
#include "Helicopter.h"
#include "Vehicle.h"

int main()
{
    Helicopter helicopter("gizike");
    helicopter.land();
    helicopter.fly();
    helicopter.takeOff();
    helicopter.print();
    helicopter._speed = 23;

    return 0;
}