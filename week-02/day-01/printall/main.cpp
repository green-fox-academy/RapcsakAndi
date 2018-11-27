#include <iostream>

int main() {

    // - Create an array variable named `numbers`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print all the elements of `numbers`

    /*int numbers [] = {4, 5, 6, 7};

    for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        std::cout << numbers[i] << std::endl;
    }*/

    int numbers [] = {4, 5, 6, 7};

    for ( int x = 0; x < sizeof(numbers)/sizeof(numbers[0]); x++) {
        std::cout << numbers [x] << std::endl;
    }
        return 0;
}