#include <iostream>

int main() {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4
    int a;
    std::cout << " Enter five integer: ";
    std::cin >> a;
    int b;
    std::cin >> b;
    int c;
    std::cin >> c;
    int d;
    std::cin >> d;
    int e;
    std::cin >> e;

    int sum;
    sum = a + b + c + d + e;
    int average;
    average = (a + b + c + d + e) / 5;

    std::cout << "Sum: " << sum  << ", Average: " << average << std::endl;
    return 0;
}