#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int are_the_same(char *a, char *b);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char first[20];

    printf("Enter a word?\n");
    scanf("%s", first);

    char second[20];

    printf("Enter another word?\n");
    scanf("%s", second);

    char* first_new = strlwr(first);
    char* second_new = strlwr(second);

    printf("%s", first);
    printf("%s", second);

    int result = are_the_same(first_new,second_new);
    printf("%d", result);
    return 0;
}

int are_the_same(char *a, char *b)
{
    if (strcmp(a, b) != 0)
        return 0;
    else
        return 1;
}