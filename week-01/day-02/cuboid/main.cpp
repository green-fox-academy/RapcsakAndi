#include <iostream>

int main() {
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    int a = 10;
    int b = 15;
    int c = 25;

    int surface = a * b;
    int volume = a * b * c;

    std::cout << "surface: " << surface << std::endl;
    std::cout << "volume: " << volume << std::endl;
    return 0;
}