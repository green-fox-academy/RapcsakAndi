#include <iostream>

int main() {
        // Write a program that prints a few details to the terminal window about you
    // It should print each detail to a new line.
    //  - Your name
    //  - Your age
    //  - Your height in meters (as a decimal fraction)
    //
    //  Example output:
    //  John Doe
    //  31
    //  1.87
    /*std::cout << "Andrea Rapcsak" << std::endl;
    std::cout << "37" << std::endl;
    std::cout << "1.65" << std::endl;*/

    std::string first = "Andrea";
    std::string last = " Rapcsak";
    int n = 37;
    int k = 165;

    std::cout<< first + last <<std::endl;
    std::cout<< n <<std::endl;
    std::cout<< k <<std::endl;

    return 0;
}