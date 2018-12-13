#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int substring_or_not(char *a, char *b);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the shorter string is a substring of the longer one and
    // returns 0 otherwise
    // If the two strings has the same lenght than the function should return -1

    char first_word[100];

    printf("Enter a word?\n");
    scanf("%s", first_word);

    char second_word[100];

    printf("Enter a word?\n");
    scanf("%s", second_word);


    int result = substring_or_not(first_word, second_word);
    printf("%d", result);

    return 0;
}

int substring_or_not(char *a, char *b)
{

    int j = strlen(a);
    int k = strlen(b);

    if (j == k)
        return -1;

    if (strstr(a, b) != NULL)
        return 1;
    else
        return 0;
}