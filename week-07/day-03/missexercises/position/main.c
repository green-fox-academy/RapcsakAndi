#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void list_of_position(char *array);

int main ()
{
    char string[55] = "This is a string for testing";
    char *p;

    list_of_position(string);

    return 0;
}

void list_of_position(char *array)
{
    int find_letter[10];
    int k = 0;
    char p = 'i';
    int len = strlen(array);

    for (int i = 0; i < len; ++i) {
        if (array[i] == p){
            find_letter[k] = i;
            k++;
        }
    }
    for (int i = 0; i < k; i++) {
        printf("%d\n", find_letter[i]);
    }
}