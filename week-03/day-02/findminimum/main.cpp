#include <iostream>


int *minimumvalue(int *numbers,int length);

int main() {
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};


    std::cout<<*minimumvalue(numbers,7)<<std::endl;

    return 0;
}

int *minimumvalue(int *numbers,int length){
    int min = numbers[0];
    int *minPtr = numbers;
    for (int n=0; n<length; n++) {
        if (numbers[n] < min){
            min = numbers[n];
            minPtr = numbers + n;
        }
    }  return minPtr;
}

