#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int add (int n);

int main() {

    int number;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>number;

    std::cout<<add(number)<<std::endl;
    return 0;
}

int add (int n){
    if (n<=1){
        return n;
    }else{
        return n+ add(n-1);
    }
}