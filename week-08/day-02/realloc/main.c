#include <stdio.h>
#include <stdlib.h>


// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    int x = 0;

    printf("Enter a number: \n");
    scanf("%d", &x);

    int *array = (int *) malloc(x * sizeof(int));

    printf("Enter %d numbers: \n", x);

    int number = 0;
    for (int i = 0; i < x; ++i)
    {
        scanf( "%d", &number );
        array[ i ] = number;
    }
    for (int i = 0; i < x; ++i) {
        printf("array[%d] == %d\n", i, array[i]);
    }
    printf("--------------------------------------------\n");


    array = (int *) realloc(array,(x + 1)* sizeof(int));

    int sum = 0;
    for (int i = 0; i < x; ++i) {
        sum += array[i];
    }
    array[x] = sum;

    for (int i = 0; i < x+1; ++i) {
        printf("array[%d] == %d\n", i, array[i]);
    }
    printf("--------------------------------------------\n");

    array = (int *) realloc(array, sum * sizeof(int));
    printf("Enter numbers to the program ends: \n");

    int new_number = 0;
    for (int i = x; i < sum; ++i)
    {
        scanf( "%d", &new_number );
        array[i] = new_number;
    }

    for (int i = 0; i < sum; ++i) {
        printf("array[%d] == %d\n", i, array[i]);
    }

    return 0;
}