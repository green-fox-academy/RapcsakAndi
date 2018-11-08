#include <iostream>
#include <iterator>
#include <algorithm>

int main() {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`

    int aj [] = {3, 4, 5, 6, 7};

    std::reverse(std::begin(aj), std::end(aj));


    for ( int i = 0; i < sizeof(aj)/ sizeof(aj[0]); i++){
        std::cout<< aj[i]<<std::endl;
    }

    return 0;
}