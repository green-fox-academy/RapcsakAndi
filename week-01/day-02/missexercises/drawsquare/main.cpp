#include <iostream>

int main() {
    // Write a program that reads a n from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%%
    // %    %
    // %    %
    // %    %
    // %    %
    // %%%%%%
    //
    // The square should have as many lines as the n was

    int n = 0;
    int k, c, j = 1;
    std::cout << "Enter a number: " << std::endl;
    std::cin >>n;

    for (int x = 1; x <= n; ++x){
        std::cout << "%";
    }
    std::cout << "\n";

    for (k = 1; k<=n-2; k++)
    {
        for (c = n-2; c == n-2; c++)
            std::cout<<"%";


        for (j = 1; j <= n-2; j++)
            std::cout<<" ";


        for (c = n-2; c == n-2; c++)
            std::cout<<"%";
        std::cout << "\n";
    }



    for (int x = 1; x <= n; ++x){
        std::cout << "%";
    }
    return 0;
}