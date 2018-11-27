#include <iostream>

int main() {
    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"

    int a = 0;
    while (a<=100){
        std::cout << a<<" I won't cheat on the exams!" << std::endl;
        a++;
    }

    /*for (int i = 0; i <=100 ; ++i) {
        std::cout<< i<<" I won't cheat on the exams!" << std::endl;
    }*/
    return 0;
}