#include <iostream>

int main() {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //

    int d = 6;
    int w = 5;
    int s = 17;

    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //

    std::cout << d * w * s << std::endl;

    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    int h = 52;

    std::cout << (float)d * w * s / (h * s) * 100 << std::endl;

    return 0;
}