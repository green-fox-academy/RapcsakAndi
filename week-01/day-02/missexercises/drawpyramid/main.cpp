#include <iostream>

int main() {
// Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int n, c, k, space = 1;
    std::cout << "Enter a number: ";
    std::cin >> n;
    space = n - 1;

    for (k = 1; k <= n; k++) {
        for (c = 1; c <= space; c++)
            std::cout << " ";

        space--;

        for (c = 1; c <= 2 * k - 1; c++)
            std::cout << "*";

        std::cout << "\n";
    }

    return 0;
}

