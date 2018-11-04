#include <iostream>

int main() {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables



    int remainingSeconds = 60 * 60 * 24 - (currentSeconds + currentMinutes * 60 + currentHours * 60 * 60);

    std::cout << "remainingSeconds: " << remainingSeconds << std::endl;

    return 0;
}