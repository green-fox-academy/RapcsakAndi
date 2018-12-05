#include <stdio.h>

int main()
{
    // Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8

    int a = 15;
    int guessNumber = 0;
    printf("Enter a number:\n");



    while (1) {

        scanf("%d", &guessNumber);
        if (guessNumber == a) {
            printf("You find the number");
            break;
        }
        if (guessNumber > a) {
            printf("The stored number is lover");
        }
        if (guessNumber < a) {
            printf("The stored number is higher");
        }
    }

    return 0;
}