#include <iostream>
#include <exception>

int typeNumber(int &number, int &x);
int main() {

    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    try {

        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;

        int x = 10;

        if (number == 0) {
            throw 0;
        }
        typeNumber(number,x);
    } catch (...) {
        std::cout << "Fail, you cant divide by 0" << std::endl;
    }
    return 0;
}

int typeNumber(int &number, int &x){
    std::cout << float(x) / number << std::endl;
    }