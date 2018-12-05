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


    printf("%d", equalOrNot(firstNumber, secondNumber));


    return 0;
}

int equalOrNot(int a, int b){

    if (a == b){
         return 1;
    }else;
         return 0;
}