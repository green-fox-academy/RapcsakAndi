#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int *pointer_even = NULL;

    pointer_even = (int *) malloc(10 * sizeof(int));
    for (int i = 0; i < 10; ++i) {
        pointer_even[i] = i * 2;
    }
    for (int i = 0; i < 10; ++i) {
        printf("pointer_even[%d] == %d\n", i, pointer_even[i]);
    }
    printf("--------------------------------------------\n");

    int *pointer_odd = NULL;

    pointer_odd = (int *) malloc(10 * sizeof(int));
    for (int j = 0; j < 10; ++j) {
        pointer_odd[j] = j * 2 + 1;
    }
    for (int j = 0; j < 10; ++j) {
        printf("pointer_odd[%d] == %d\n", j, pointer_odd[j]);
    }
    printf("--------------------------------------------\n");

    int *new_array = NULL;
    new_array = (int *) malloc(20 * sizeof(int));

    for (int k = 0; k < 20; ++k) {
        if (k == 0)
            new_array[k] = pointer_even[k];
        else if (k % 2 == 0)
            new_array[k] = pointer_even[k / 2];
        else if (k % 2 == 1)
            new_array[k] = pointer_odd[(k - 1) / 2];
    }

    for (int m = 19; m > 0; --m) {
        printf("new_array[%d] == %d\n", m, new_array[m]);
    }

    free(pointer_even);
    free(pointer_odd);
    free(new_array);

    return 0;


}