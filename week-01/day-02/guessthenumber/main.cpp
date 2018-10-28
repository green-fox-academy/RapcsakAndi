#include <iostream>

int main() {
    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8


    int a = 15;
    int b;
    std::cout << "Enter an integer: " << std::endl;
    std::cin>> b;

    if (b < a){
        std::cout << "The stored number is higher" << std::endl;
    }if (b > a){
        std::cout << "The stored number is lover" << std::endl;
    }if (b == a){
        std::cout << "You find the number" << std::endl;
    }
    return 0;
}