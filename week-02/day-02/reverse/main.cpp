#include <iostream>
#include <string>
std::string reverse(const std::string& text)
{

}

int main(int argc, char* args[])
{
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";

    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.

    /*std::string reverse(reversed.rbegin(), reversed.rend());
    std::cout << reverse << std::endl;*/


/*
//3-line method
    std::string a,b;
    a= ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";
    b="";
    for(int i=a.size()-1;i>=0;i--)
        b+=a[i];
    a=b;
    std::cout << b << std::endl; */

//2-line method
    std::string a,b;
    a= ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";
    for(int i=0,j=a.size()-1;i<j;i++,j--)
        std::swap(a[i],a[j]);
    std::cout << a << std::endl;
    return 0;
}
