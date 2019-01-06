#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *new_string(char *word);

int main()
{
    // Create a program which asks for a string and stores it
    // Create a function which takes a string as a parameter and
    // appends a character 'a' to the end of it and returns the new string


    char word[100];

    printf("Enter a word?\n");
    scanf("%s", word);

    char *result = new_string(word);
   printf("The new word is: %s", result);

   free(result);

    return 0;
}

char *new_string(char *word)
{
    char *word2 = (char*)calloc(strlen(word), sizeof(char));
    strcpy(word2,word);

    char * newString = strcat(word2, "a");
    printf("%d\n",strlen(word));
    printf("%d\n",strlen(word2));
    printf("%d\n",strlen(newString));


    return newString;
}