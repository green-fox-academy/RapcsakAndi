#include <iostream>

int main() {
    // Write a program that reads a number from the standard input, then draws a
    // diamond like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //  *****
    //   ***
    //    *
    //
    // The diamond should have as many lines as the number was
    int n, c, k, space = 1;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    space = n - 1;

    for (k = 1; k<=n; k++)
    {
        for (c = 1; c<=space; c++)
            std::cout<<" ";

        space--;

        for (c = 1; c<= 2*k-1; c++)
            std::cout<<"*";

        std::cout<<"\n";
    }

    space = 1;

    for (k = 1; k<= n - 1; k++)
    {
        for (c = 1; c<= space; c++)
            std::cout<<" ";

        space++;

        for (c = 1 ; c<= 2*(n-k)-1; c++)
            std::cout<<"*";

        std::cout<<"\n";
    }
    return 0;
}