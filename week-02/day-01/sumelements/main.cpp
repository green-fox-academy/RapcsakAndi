#include <iostream>

int main() {

    // - Create an array variable named `r`
    //   with the following content: `[54, 23, 66, 12]`
    // - Print the sum of the second and the third element

    int r [] = {54, 23, 66, 12};

    int s = r [1] + r [2];
    std::cout << s << std::endl;
    return 0;
}