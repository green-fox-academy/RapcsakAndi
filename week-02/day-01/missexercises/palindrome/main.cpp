/*Create a function named create palindrome following your current language's style guide.
It should take a string, create a palindrome from it and then return it.*/

#include <iostream>

void createPalindrome(std::string input);
std::string reverse(std::string input);

int main() {
    /*std::string s;
    std::cout<<"Enter a string without space: ";
    std::cin >> s;
    if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        std::cout << "is a palindrome.\n";
    else
        std::cout << "is NOT a palindrome.\n";*/

    std::string input;
    std::cout << "Please enter a string without space: ";
    std::cin >> input;

    reverse(input);
    createPalindrome(input);

    return 0;
}
void createPalindrome(std::string input){
    if (input == std::string(input.rbegin(), input.rend())) {
        std::cout<<"==>"<<input<< " is a palindrome";
    }else{
        std::cout<<"==>"<<input<< " is not a palindrome";
    }
}
std::string reverse(std::string input){
    for(int i = 1; i <= input.length(); i++){
        std::cout << input[input.length() - i];
    } std::cout<<"\n";
}