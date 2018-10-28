#include <iostream>

int main() {

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was

    std::string a = "*";
    std::cout << "Enter a string: " << std::endl;
    std::cin >> a;

    for (a = "*"; a < 10; a++) {
        std::cout << a << " * " << a << " = "<< a * a << std::endl;
    }


    return 0;
}