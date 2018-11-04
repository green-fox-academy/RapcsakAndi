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


    int a = 0;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>a;
    std::string c = "";

    for (int b = 0; b < a; b++){
        c+= "*";
        std::cout<< c <<std::endl;
    }


    /*int number = 0;
    std::string a = "";
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> number;

    for (int x = 0; x < number; x++) {
        a += "*";
        std::cout << a << std::endl;
    }*/


    return 0;
}