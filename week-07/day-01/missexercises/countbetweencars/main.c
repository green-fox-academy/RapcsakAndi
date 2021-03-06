#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void number_between_character(char *word, char character);

int main()
{
    // Create a function which takes a string as a parameter and
    // returns the number of characters between two repeating characters
    // the repeating char can be a local variable in the function itself or
    // it can be passed to the function as parameter
    char character, word[50];


    printf("Now enter a word: \n");
    scanf("%s", word);
    printf("Enter character: \n");
    scanf(" %c", &character);


    // the output should be: 6 (in this case the repeating char was 'g')
    number_between_character(word, character);

    return 0;
}

void number_between_character(char *word, char character)
{
    int array[5];
    int number = 0;
    int k = 0;

    for (int i = 0; i < strlen(word); ++i) {
        if (word[i] == character){
            array[k] = i;
            k++;
        }
    }
    for (int i = 0; i < k-1; i++) {
        number = array[i + 1] - array[i];
        printf("%d ", number);
    }
}