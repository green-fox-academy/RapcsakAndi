#include <iostream>

int main() {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user

    std::string firstN;
    std::cout << "Please enter a string: ";
    std::cin >> firstN;
    std::cout << "Hello, " << firstN << "!" << std::endl;


    return 0;
}