#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int sumDigits(int n);

int main() {

    int number;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>number;


    std::cout<<sumDigits(number)<<std::endl;
    return 0;
}

int sumDigits(int n){
    if(n<=9)
        return n;
    else{
        return sumDigits((n-n%10)/(10)+sumDigits(n%10));
    }
}
