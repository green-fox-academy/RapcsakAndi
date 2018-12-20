#ifndef COUNTBETWEENCARSOTHERVERSION_VECTOR_H
#define COUNTBETWEENCARSOTHERVERSION_VECTOR_H

typedef struct vector{
    int size;
    int capacity;
    int* elements;
}vector_t;

vector_t* init_vector();
void deinit_vector(vector_t* vector);
void push_back_vector(vector_t* vector, int value);


#endif //COUNTBETWEENCARSOTHERVERSION_VECTOR_H
