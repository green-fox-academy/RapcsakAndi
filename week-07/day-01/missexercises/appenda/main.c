#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char new_string(char *word);

int main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string


    char word[100];

    printf("Enter a word?\n");
    scanf("%s", word);

    printf("The new word is: %s",new_string(word));

    return 0;
}

char new_string(char *word)
{

    char character = 'a';
    strcat(word, character);

    return strcat;
}