#include <iostream>

int main() {
    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    int numList [] = {3, 4, 5, 6, 7};


    for (int x =0; x<sizeof(numList) / sizeof(numList[0]); x++) {
        numList [x] = numList [x] *2;

    }

    for (int y = 0; y<5;y++){
        std::cout << numList [y]<< std::endl;
    }
    return 0;
}