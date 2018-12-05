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

    int returnNumber = oddOrEven(userNumber);
    printf("%d", returnNumber);

    return 0;
}

int oddOrEven(int a){
    int c = 3;
    if (a % 2 == 0)
        c = 1;
    else
        c = 0;

    return c;
}