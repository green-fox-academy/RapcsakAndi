#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.

void rec (int n);

int main() {

    int num;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>num;

    rec(num);

    return 0;
}

void rec (int n){
    if (n>=1){
        std::cout<<"Number: "<<n<<std::endl;
        rec(n-1);
    }
}