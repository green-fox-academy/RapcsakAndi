// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

#include <iostream>
int add (int n);

int main() {
    int bunnysNumber;
    std::cout<<"Enter bunnys number: "<<std::endl;
    std::cin>>bunnysNumber;

    std::cout<<add(bunnysNumber)<<std::endl;
    return 0;
}
int add (int n){
    if (n==0){
        return n;
    }else{
        return (2+ add(n-1));
    }
}