#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Vowels:
 *
 * Create a function that can count the vowels in the text.txt.
 *
 * text.txt example:
 * Lorem ipsum dolor sit etc.
 *
 * In the same function write the vowels into another text file (just_some_vowels.txt).
 *
 * just_some_vowels.txt example solution:
 * oeiuooi etc.
 *
 * The function should return with a number of the vowels. (101)
 */

int count_the_vowels(char*file_name)
{
    FILE *my_file;
    my_file = fopen(file_name, "r");
    if (my_file == NULL) {
        perror("Failed: ");
        return -1;
    } else {
        printf("The file is open\n");
    }

    FILE *my_file2;
    my_file2 = fopen("new_file.txt", "w");

    char line[256];
    int i = 0;
    int vowels = 0;

    while (fgets(line, 255, my_file)) {
        for (i = 0; i<strlen(line); ++i) {
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
                line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
                line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
                line[i] == 'U') {
                fprintf(my_file2,"%c", line[i]);
                vowels++;
            }
        }
    }
    fclose(my_file);
    fclose(my_file2);
    return vowels;
}


int main()
{
    int result = count_the_vowels("vowels.txt");
    printf("%d\n", result);


    return 0;
}