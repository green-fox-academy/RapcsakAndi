#include <iostream>

int main() {
    // Write a program that asks for two numbers and prints the bigger one

    int a;
    std::cout << "Enter two integer: " << std::endl;
    std::cin >> a;
    int b;
    std::cin >> b;

    if (a > b){
        std::cout << a << std::endl;
    }else{
        std::cout << b << std::endl;
    }
    return 0;
}