#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each of lines form the file.
// You have to create the file, you can use C-programming but it is not mandatory

int main ()
{
    FILE *fPointer;
    fPointer = fopen("my-file.txt", "w");
    fprintf(fPointer, "I will meet my friends\n We will eat cookie\n we will drink coffee");
    fclose(fPointer);

    fPointer = fopen("my-file.txt", "r");
    char single_line [150];
    while(!feof(fPointer)){
        fgets(single_line, 150, fPointer);
        puts(single_line);
    }
    fclose(fPointer);
    return 0;
}