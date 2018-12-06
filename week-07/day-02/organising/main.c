#include <stdio.h>
#include "pi.h"
/*Organise the function from the previous excercise to separate .c and .h files
Create another function which calculates the circumference of a circle
the radius of the circle should be passed as a parameter
        the function should return the calculated circumference
        circumference = 2 * radius * PI
this function should be in the same .c and .h files as the one which calculates the area*/

float circum_ference(int r);

int main()
{
    int r = 15;

    printf("%.2f", circum_ference(r));

    return 0;
}

float circum_ference(int r){
    float circle = 2 * r * PI;
    return circle;
}