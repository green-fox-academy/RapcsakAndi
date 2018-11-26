#include <iostream>
#include <algorithm>

void swapValue(int *a, int *b);

int main() {

    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;

    std::cout<<a<<", "<<b<<std::endl;
    swapValue(&a,&b);
    std::cout<<a<<", "<<b<<std::endl;
    return 0;
}
void swapValue(int *a, int *b){
    std::swap(*a,*b);

}