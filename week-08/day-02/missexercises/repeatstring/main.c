#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating. The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char *repeat_string(char* word, int number);

int main()
{
    char* result = repeat_string("bogyo", 6);
    printf("%s",result);

    free(result);

    return 0;
}

char *repeat_string(char* word, int number){

    char *new_string = (char *)calloc(number * strlen(word), sizeof(char));
    for(int i = 0; i < number; i++) {
        strcat(new_string, word);
    }
    return new_string;
}