#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vector.h"

void number_between_character(char *word, char character);

int main()
{
    char character, word[50];
    printf("Now enter a word: \n");
    scanf("%s", word);
    printf("Enter character: \n");
    scanf(" %c", &character);

    number_between_character(word, character);

    return 0;
}

void number_between_character(char *word, char character)
{
    vector_t* vector = init_vector();
    int number = 0;

    for (int i = 0; i < strlen(word); ++i) {
        if (word[i] == character){
            push_back_vector(vector,i);
        }
    }
    for (int i = 0; i < vector->size-1; i++) {
        number = vector->elements[i + 1] - vector->elements[i];
        printf("%d ", number);
    }
    deinit_vector(vector);
}
