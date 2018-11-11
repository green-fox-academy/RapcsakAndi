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

    for (int b = 0; b < a; ++b) {
        std::cout << "your numbers are: " << std::endl;
        array [b] = 0;
        std::cin >> array[b];
    }

    for (int i = 1; i < a; ++i) {
        int biggest = array[i];
        if (array [0] < array[i])
                array [0] = array[i];
        }

    std::cout << "Biggest element = " << array[0]<<std::endl;
    std::cout<<"Its memory address is: "<<&array[0]<<std::endl;





    return 0;
}