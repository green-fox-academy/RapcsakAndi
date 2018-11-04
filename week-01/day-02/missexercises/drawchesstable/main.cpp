#include <iostream>

int main() {
    // Crate a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %

    int a;
    std::cout<<"Enter a number: ";
    std::cin>>a;


        for (int b=1; b<=a; b++) {
        if (b % 2 == 1) {
            for (int c = 1; c <= a; c++) {
                if (c % 2 == 1) {
                    std::cout << "%";
                } else {
                    std::cout << " ";
                }
            }std::cout<<"\n";
        } else {
            for (int d = 1; d <= a; d++) {
                if (d % 2 == 1) {
                    std::cout << " ";
                } else {
                    std::cout << "%";
                }
            }
            std::cout << std::endl;
        }

    }





    return 0;
}