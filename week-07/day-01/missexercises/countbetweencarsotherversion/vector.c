#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

vector_t* init_vector()
{
    vector_t* vector = (vector_t*)malloc(sizeof(vector_t));
    vector->elements = (int*)malloc(sizeof(int));
    vector->size = 0;
    vector->capacity = 1;

    return vector;
}
void push_back_vector(vector_t* vector, int value)
{
    if(vector->size == vector->capacity) {
        vector->elements = (int*) realloc(vector->elements, (vector->capacity*2) * sizeof(int));
        vector->capacity *= 2;
    }
    vector->elements[vector->size] = value;
    vector->size++;
}

void deinit_vector(vector_t* vector)
{
    free(vector->elements);
    free(vector);
}

