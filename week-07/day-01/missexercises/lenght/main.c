#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int how_long_your_name (const char* a);
int how_long_your_name_without_stringh (const char* a);

int main()
{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions

    char name[20];

    printf("Hello! What is your name?\n");
    scanf("%s", name);

    printf("Wow your name is %d characters long.\n\n", how_long_your_name(name));
    printf("Length of your name: %d characters.", how_long_your_name_without_stringh(name));

    return 0;
}

int how_long_your_name (const char* a)
{
     return strlen(a);
}

int how_long_your_name_without_stringh (const char* a)
{
    int i;
    for (i = 0; a[i] != '\0'; ++i);

    return i;
}