#include <iostream>

int main() {
    // Create a program that prints all the even numbers between 0 and 500

    /*for (int a = 2; a < 500; a += 2 ) {
        std::cout << a << std::endl;
    }*/
    for (int i = 0; i <500 ; ++i) {
        if(i % 2 == 0)
            std::cout<<i<<std::endl;

    }

    return 0;
}