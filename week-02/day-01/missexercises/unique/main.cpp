#include <iostream>
#include <algorithm>

using namespace std;

void question(int numbers[], int size);
void unique (int array [], int size);

int main() {

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    /*int numbers[] = {1, 11, 34, 11, 52, 61, 1, 34};
    std::cout << (unique(numbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`*/

    int numbers [] = {2, 5, 8, 15, 3, 5, 2, 23};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    question(numbers, size);
    unique (numbers, size);

    return 0;
}
void question(int numbers[], int size){
    /*int array[size];
    int elementNumber = 0;*/

    for (int i = 0; i < size; i++ ){
        int j;
        for (j =0; j <i; j++){
            if ( numbers [i] == numbers [j])
                 break;
        }
        if (i == j)
            std::cout<<numbers[i]<< " ";
    }
}

void unique (int array [], int size){
    int arrayNew [size];
    int elementNumber = 0;

    for (int a = 0; a <size; a++){
        bool find = false;
        for (int b = 0; b < elementNumber; b++){
            if (array [a] == arrayNew [b]){
                find = true;
            }
        }
        if (find == false){
            std::cout<<array[a]<<" ";
            arrayNew [elementNumber] = array [a];
            elementNumber++;
        }
    }
}
