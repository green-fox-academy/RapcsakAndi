#include <stdio.h>
#include <stdlib.h>
#include "vector.h"


int main()
{

    /*Insert at the end
     * This funtion should take a vector and a value as parameters. It should insert it after the last element.
     * If there's not enough space in the array, new memory should be allocated.
     * (A typical implementation is that the capacity doubles if there's no more empty spaces)*/

    vector_t* vector = init_vector();
    push_back_vector(vector, 15);
    push_back_vector(vector, 21);
    push_back_vector(vector, 1);

    for(int i=0; i<vector->size; i++)
    {
        printf("%d  ", vector->elements[i]);
    }

    deinit_vector(vector);

    return 0;
}