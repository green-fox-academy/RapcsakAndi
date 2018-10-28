#include <iostream>

int main() {
    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot
    int a;
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> a;

    if (a <= 0){
        std::cout << "Not enough" << std::endl;
    }if (a == 1){
        std::cout << "One" << std::endl;
    }if (a == 2){
        std::cout << "two" << std::endl;
    }if (a > 2){
        std::cout << "a lot" << std::endl;
    }

    return 0;
}