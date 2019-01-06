#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int distance_between_first_and_last( char* str, int size);

int main ()
{
    char str[] = "This is a sample string";
    char *first, *last;

    int result = distance_between_first_and_last(str,strlen(str));
    printf("distance between the first end the last occurance letter: %d ", result);
    return 0;
}

int distance_between_first_and_last( char* str, int size){
    int find_letter_position[10];
    int distance = 0;
    int number = 0;
    char search_letter = 's';

    for (int i = 0; i < size; ++i) {
        if(str[i] == search_letter){
            find_letter_position[number] = i;
            number++;
        }
    }
    for (int j = 0; j < number-1; ++j) {
        distance = find_letter_position[number-1]-find_letter_position[0];
    }

    return distance;
}