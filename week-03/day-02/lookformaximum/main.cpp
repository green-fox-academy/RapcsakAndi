#include <iostream>

int main() {

    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it


    int a;
    std::cout<<"Enter a number: ";
    std::cin>>a;

    int array [a];

    for (int b = 0; b < a; ++b){

        std::cin>>array[b];
    }


    return 0;
}