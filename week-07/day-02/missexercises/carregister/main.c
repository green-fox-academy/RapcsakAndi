#include <string.h>
#include <stdio.h>

/* Write a car register!
 * You should store the following data in a structure, called "car":
 *  - the manufacturer's name (which is shorter than 256 characters)
 *  - the price of the car (in euros, stored as a floating point number)
 *  - the year of manufacture
 *  - the type of the transmission (as a custom type, see below)
 *
 * You should store the transmission type in an enumeration ("transmission"),
 * the valid types are:
 *  - manual
 *  - automatic
 *  - CVT
 *  - semi-automatic
 *  - dual-clutch
 *
 * The "car"-s are stored in an array.
 *
 * Write the following functions:
 *  - get_older_cars_than(struct car* array, int array_length, int age)
 *      - it returns the count of the older cars than "age"
 *  - get_transmission_count(struct car* array, int array_length, enum transmission trnsm)
 *      - it returns the count of cars which has "trnsm" transmission */

typedef enum type_of_the_transmission{
    MANUAL,
    AUTOMATIC,
    CVT,
    SEMI_AUTOMATIC,
    DUAL_CLUTCH
} type_of_the_transmission_t;

typedef struct car{
    char manufacturer_name[256];
    float price_of_car;
    int year_of_manufacture;
    type_of_the_transmission_t vehicle;

}car_t;

int get_older_cars_than(car_t* array, int array_length, int age){
    int counter = 0;
    int year = 2019;
    for (int i = 0; i <array_length; ++i) {
        if(year-array[i].year_of_manufacture > age){
            counter++;
        }
    }
    return counter;
}

int get_transmission_count(car_t* array, int array_length,type_of_the_transmission_t trns){
    int counter = 0;
    for (int i = 0; i < array_length; ++i) {
        if(array[i].vehicle == trns){
            counter++;
        }
    }
    return counter;
}

int main()
{

    return 0;
}
