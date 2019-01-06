#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

void n_percentile_of_the_elements(int *array, int percentile);

int main()
{
    int x = 0;

    printf("Enter a number: \n");
    scanf("%d", &x);

    int *array = (int *) calloc(x, sizeof(int));

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
    int percentile = 0;
    printf("Enter the percentile do you want: \n");
    scanf("%d", &percentile);

    n_percentile_of_the_elements((float *) array, percentile);

    for (int j = 0; j < sizeof(array); ++j) {
        printf("%.2f\n", array[j]);
    }

    free(array);
    return 0;
}

void n_percentile_of_the_elements(int *array, int percentile){

    int i = 0;
    for (i = 0; i <sizeof(array) ; ++i) {
        array[i] = (float)array[i]* (float)percentile / 100;
        printf("%.2f", array[i]);
    }

}