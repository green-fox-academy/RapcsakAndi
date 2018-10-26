#include <iostream>

int main() {

    // Swap the values of the variables
    int a = 123;
    int b = 526;
    int c = 0;

    c = a;
    a = b;
    b = c;


    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}