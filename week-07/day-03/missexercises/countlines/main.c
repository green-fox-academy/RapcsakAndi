#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int number_of_lines(char *file);

int main ()
{

    printf("%d", number_of_lines("my-file.txt"));


    return 0;
}
int number_of_lines(char *file)
{
    FILE *my_file = fopen("my-file.txt", "r");
    if (my_file == NULL) {
        perror("Failed: ");
        return 0;
    }
    int lines = 1;
    int ch = 0;

    if(feof(my_file))
        lines = 0;

    while(!feof(my_file))
    {
        ch = fgetc(my_file);
        if(ch == '\n')
        {
            lines++;
        }
    }
    fclose(my_file);


   return lines;
}