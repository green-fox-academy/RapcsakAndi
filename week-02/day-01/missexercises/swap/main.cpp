#include <iostream>

void swap(int &a, int &b);
int main() {

    // Create two integer variables: a=15, b=23
    // Create a function named swap that gets the 2 integers as parameters and swaps its values.
    // Print the values before and after the function call and make sure the values are printed in reversed order.
    int a = 15;
    int b = 23;

    std::cout<<"a number is: "<<a<<std::endl;
    std::cout<<"b number is: "<<b<<std::endl;

    swap(a,b);

    std::cout<<"the new value of the a number is: "<<a<<std::endl;
    std::cout<<"the new value of the b number is: "<<b<<std::endl;

    return 0;
}

void swap(int &a, int &b){
    int c = 0;
    c = a;
    a = b;
    b = c;

}