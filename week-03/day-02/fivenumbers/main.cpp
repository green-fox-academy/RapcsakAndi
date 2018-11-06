#include <iostream>

int main() {

    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int array [5];

    for (int x = 0; x<5; x++){
        std::cout<<"Enter a number: "<<std::endl;
        std::cin>>array[x];
    }


    for (int y = 0; y <sizeof (array)/sizeof(array [0]) ; y++) {
        std::cout << *(&array [y])<< std::endl;
    }


    return 0;
}