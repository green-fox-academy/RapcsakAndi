#include <iostream>

int main() {
    // Create a program that asks for a number and prints the multiplication table with that number
    //
    // Example:
    // The number 15 should print:
    //
    // 1 * 15 = 15
    // 2 * 15 = 30
    // 3 * 15 = 45
    // 4 * 15 = 60
    // 5 * 15 = 75
    // 6 * 15 = 90
    // 7 * 15 = 105
    // 8 * 15 = 120
    // 9 * 15 = 135
    // 10 * 15 = 150
    int a;
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> a;
    for (int b = 1; b <= 10; b++) {
    std::cout << b << " * " << a << " = "<< b * a << std::endl;
    }
    return 0;
}