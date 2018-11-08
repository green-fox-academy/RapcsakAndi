#include <iostream>

int main(){

    // - Create an array variable named `ai`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Print the sum of the elements in `ai`

    int ai [] = {3, 4, 5, 6, 7};
    int sum = 0;
    for (int i = ai [0]; i<=ai [4]; i++){
        sum += i;

    }
    std::cout<<sum<<std::endl;
    return 0;
}