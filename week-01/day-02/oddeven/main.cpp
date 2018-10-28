#include <iostream>

int main() {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.
    int n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    if ( n % 2 == 0)
        std::cout << n << " is even.";
    else
        std::cout << n << " is odd.";



    return 0;
}