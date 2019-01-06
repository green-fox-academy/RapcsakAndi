#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type
{
    VOLVO, TOYOTA, LAND_ROVER, TESLA
};

struct car
{
    enum car_type type;
    double km;
    double gas;
};

void car_parameter(struct car *c);

int main()
{
    struct car toyota;
    toyota.type = TOYOTA;
    toyota.km = 178.5;
    toyota.gas = 7.2;
    car_parameter(&toyota);

    struct car tesla;
    tesla.type = TESLA;
    tesla.km = 190.5;
    tesla.gas = 6.2;

    car_parameter(&tesla);
    return 0;
}

void car_parameter(struct car *c)
{
    if (c->type == VOLVO) {
        printf("Volvo's km is %.1f, and gas %.1f.\n", c->km, c->gas);
    } else if (c->type == TOYOTA) {
        printf("Toyota's km is %.1f, and gas %.1f.\n", c->km, c->gas);
    } else if (c->type == LAND_ROVER) {
        printf("Land Rover's km is %.1f, and gas %.1f.\n", c->km, c->gas);
    } else if (c->type == TESLA) {
        printf("Tesla's km is %.1f.\n", c->km);
    }
}