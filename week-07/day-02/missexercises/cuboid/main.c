#include <stdio.h>

// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

typedef struct rectangular_cuboid {
    double a;
    double b;
    double c;
}rectangular_cuboid_t;

double get_surface(rectangular_cuboid_t cuboid);
double get_volume(rectangular_cuboid_t cuboid);

int main()
{
    rectangular_cuboid_t cuboid;
    cuboid.a = 2.45;
    cuboid.b = 4.67;
    cuboid.c = 7.65;

    printf("%.5f\n",get_surface(cuboid));
    printf("%.5f\n",get_volume(cuboid));


    return 0;
}

double get_surface(rectangular_cuboid_t cuboid)
{
    double surface = (cuboid.a * cuboid.b + cuboid.b * cuboid.c + cuboid.a * cuboid.c) * 2;
    return  surface;
}

double get_volume(rectangular_cuboid_t cuboid)
{
    double volume = cuboid.a * cuboid.b * cuboid.c;
    return volume;

}
