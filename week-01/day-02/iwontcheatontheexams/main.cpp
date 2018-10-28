#include <iostream>

int main() {
    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"

    int a = 0;
    while (a<=100){
        std::cout << "I won't cheat on the exams!" << std::endl;
        a = a + 1;
    }

    return 0;
}