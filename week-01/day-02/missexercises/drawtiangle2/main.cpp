#include <iostream>

int main() {
    int number = 0;
    std::string a = "";
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> number;

    for (int x = 0; x < number; x++) {
        a += "*";
        std::cout << a << std::endl;
    }
    for (int x = number-1; x >= 0; x--) {
        a = a.substr(0, a.size()-1);

        std::cout << a << std::endl;
    }

    return 0;
}