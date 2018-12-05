#include <stdio.h>
#include <stdlib.h>

int equalOrNot(int a, int b);

int main()
{
    // Create a program which asks for two integers and stores them separatly
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise

    int firstNumber;
    printf("Enter a number:\n");
    scanf("%d", &firstNumber);
    int secondNumber;
    printf("Enter another number:\n");
    scanf("%d", &secondNumber);

    int j = equalOrNot(firstNumber, secondNumber);

    printf("%d", j);


    return 0;
}

int equalOrNot(int a, int b){
    int c = 2;
    if (a == b){
         c = 1;
    }else
         c = 0;
    return c;
}