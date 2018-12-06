#include <stdio.h>
#include <stdlib.h>
#include "PI.h"

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

float area_of_a_circle(int r);

int main()
{
    int r = 17;

    printf("%.2f", area_of_a_circle(r));

    return 0;
}
float area_of_a_circle(int r){

    float area = r*r*PI;
    return area;
}
