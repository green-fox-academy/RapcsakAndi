#include <stdio.h>
#include <stdlib.h>

int oddOrEven(int a);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int userNumber = 0;
    printf("Enter a number:\n");
    scanf("%d", &userNumber);


    printf("%d", oddOrEven(userNumber));

    return 0;
}

int oddOrEven(int a){

    if (a % 2 == 0)
        return 1;
    else
        return 0;
}