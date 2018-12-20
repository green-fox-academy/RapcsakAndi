#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

vector_t* init_vector()
{
    vector_t* vector = (vector_t*)malloc(sizeof(vector_t));
    vector->elements = (int*)malloc(10 * sizeof(int));
    vector->size = 0;
    vector->capacity = 10;

    return vector;
}

void push_back_vector(vector_t* vector, int value)
{
    if(vector->size == vector->capacity) {
        vector = (vector_t *) realloc(vector, (vector->capacity*2) * sizeof(vector_t));
        vector->capacity *= 2;

    }else{
        vector->elements[vector->size] = value;
        vector->size++;
    }
    //nezzuk meg, hogy a vector size == a vector capacity
    //ha egyenlo, akkor reallocoljuk a elements tombot mondjuk a jelenlegi capacity ketszeresere. ne felejtsuk el a capacityt beallitani az ujonnan lefoglalt meretre.

    //elements[size] = value
    //size++
}

void deinit_vector(vector_t* vector)
{
    free(vector->elements);
    free(vector);
}
