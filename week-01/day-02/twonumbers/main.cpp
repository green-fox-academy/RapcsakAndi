#include <iostream>

int main() {

    // Create a program that prints a few operations on two numbers: 22 and 13

    int a = 22;
    int b = 13;

    // Print the result of 13 added to 22

    std::cout << a + b << std::endl;


    // Print the result of 13 substracted from 22

    std::cout << a - b << std::endl;

    // Print the result of 22 multiplied by 13

    std::cout << a * b << std::endl;

    // Print the result of 22 divided by 13 (as a decimal fraction)

    std::cout << (float)a / b << std::endl;

    // Print the integer part of 22 divided by 13

    std::cout << a / b << std::endl;

    // Print the reminder of 22 divided by 13

    std::cout << a % b << std::endl;



    return 0;
}