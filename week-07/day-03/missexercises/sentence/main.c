#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void split_string(char* string);

int main()
{
    printf("Type in a sentence:\n\n");
    char string[256];
    scanf("%[^'\n']s",string);

    split_string(string);

    return(0);
}
void split_string(char* string)
{
    for (char *p = strtok(string, " "); p != NULL; p = strtok(NULL, " ")) {
        puts(p);
    }
}