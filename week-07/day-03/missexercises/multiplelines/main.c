#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

void multiple_lines(char **my_file, char* word, int number);

int main()
{
    char word[50];
    printf("Type a word:\n");
    scanf("%s", word);
    int number = 0;
    printf("Type a number:\n");
    scanf("%d", &number);
    FILE *my_file = NULL;


    multiple_lines((char **) my_file, word, number);

    return 0;
}

void multiple_lines(char **my_file, char* word, int number){
    my_file = (char **) fopen("my-file.txt", "w");
    if (my_file == NULL) {
        perror("Failed: ");
    }else{
        printf("The file is open");
    }
    for (int i = 0; i < number; ++i) {
        fputs(word, (FILE *) my_file);
        fputs("\n",(FILE *) my_file);
    }
    fclose((FILE *) my_file);
}