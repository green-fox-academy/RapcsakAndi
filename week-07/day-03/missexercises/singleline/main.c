#include <stdio.h>
#include <string.h>

// Open a file called "my-file.txt"
// Write your name in it as a single line

int main ()
{

    FILE *my_file = fopen("my-file.txt", "w");
    if (my_file == NULL) {
        perror("Failed: ");
        return 0;
    }else{
        printf("The file is open");
    }


    fprintf(my_file, "Andrea Rapcsak");
    fclose(my_file);

    return 0;
}