#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_a_character(char *word, char character);

int main()
{
    // Create a program which asks for a string and a character and stores them
    // Create a function which takes a string and a character as a parameter and
    // if the given character is in the string, it should return the index of the
    // first appearance (in the given string) otherwise the function should return -1
    //
    // Example:
    //
    // Case 1:
    //
    // given_string = "embedded"
    // given_char = 'd'
    //
    // the function should return: 4, because this is the index of the first appearance of char 'd'
    //
    //
    // Case 2:
    //
    // given_string = "embedded"
    // given_char = 'a'
    //
    // the function should return: -1, because there is no 'a' in the word "embedded"
    //

    char character, word[50];


    printf("Now enter a word: \n");
    scanf("%s", word);
    printf("Enter character: \n");
    scanf(" %c", &character);


    printf("Positions of '%c' in %s are: ", character, word);
    int result = find_a_character(word, character);
    printf("%d", result);

    return 0;
}

int find_a_character(char *word, char character)
{
    int i;
    for (i = 0; i < strlen(word); i++) {
        if (word[i] == character) {
            return i;
        }
    }

    return -1;
    /*(https://www.sanfoundry.com/c-program-frequency-position-character-string/)
     * if (flag)
    {
        printf("\nCharacter '%c' occured for %d times.\n", character, freq);
    }
    else
    {
        printf("None\n");
    }*/
}