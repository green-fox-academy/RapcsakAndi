#include <iostream>

int* findMinimum (int array[], int size);

int main() {

    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int size= sizeof(numbers)/sizeof(numbers[0]);

    std::cout<<"The pointer of the number is: "<<*findMinimum(numbers, size)<<std::endl;

     std::cout<<"Please help me";
    return 0;
}

int* findMinimum (int array[], int size){
    int min = array[0];
    int index = 0;
    for (int i = 1; i < size; ++i) {
        if (array [i] < min) {
            min = array[i];
           index = i;
        }
    }
    return &array[index];


}