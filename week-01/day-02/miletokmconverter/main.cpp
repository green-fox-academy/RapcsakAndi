#include <iostream>

int main() {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    int km;

    std::cout << "Enter an integer: ";
    std::cin >> km;

    float e = 0.621371192;
    float mile;
    mile = km * e;

    std::cout << " It is " << mile << " mile. " << std::endl;
    return 0;
}