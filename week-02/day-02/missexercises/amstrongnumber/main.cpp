#include <iostream>

int main() {
    /*Write a simple program to check if a given number is an armstrong number.
    The program should ask for a number. E.g. if we type 371,
    the program should print out: The 371 is an Armstrong number.*/

    int origNum, num, rem, sum = 0;
    std::cout << "Enter a positive number: ";
    std::cin >> origNum;

        num = origNum;

        while(num != 0)
        {
            rem = num % 10;
            sum += rem * rem * rem;
            num /= 10;
        }

        if(sum == origNum)
            std::cout << origNum << " is an Armstrong number.";
        else
            std::cout << origNum << " is not an Armstrong number.";

        return 0;
    }
