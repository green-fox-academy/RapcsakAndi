#include <iostream>

int main() {

    int chicken;
    std::cout << "How many chicken do you have? Enter an integer: ";
    std::cin >> chicken;

    int pig;
    std::cout << "How many pig do you have? Enter an integer: ";
    std::cin >> pig;

    int leg;
    leg = chicken * 2 + pig * 4;

    std::cout << "They have " << leg << " legs" << std::endl;

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    return 0;
}