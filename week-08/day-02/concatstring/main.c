#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char* concatenate(const char *a, const char *b);

int main()
{
    char *first = "first";
    char *second = "second";

    printf(concatenate(first,second));

    return 0;
}

char* concatenate(const char *a, const char *b)
{
    char *result = malloc(strlen(a) + strlen(b) + 1);
    strcpy(result, a);
    strcat(result, b);

    return result;
}