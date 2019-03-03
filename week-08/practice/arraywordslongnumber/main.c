#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int words_number_in_the_file(char* path){
    FILE *fpointer = fopen(path, "r");

    char line[512];
    int counter = 0;
    if (fpointer == NULL) {
        printf("Cannot find file.");
        return -1;
    } else {
        while (fgets(line, 512, fpointer) != NULL) {
            char *token;
            token = strtok(line, " :,.!?;\"");
            while( token != NULL ) {
                ++counter;
                token = strtok(NULL, " :,.!?;\"");
            }
        }
    }

    fclose(fpointer);
    return counter;

}

char read_from_file(char* path) {


    char **words = malloc(words_number_in_the_file(path) * sizeof(char *));
    FILE *fpointer = fopen(path, "r");
    int counter = 0;

    if (fpointer == NULL) {
        printf("Cannot find file.");
        return -1;
    } else {
        char line[256];
        while (fgets(line, 256, fpointer) != NULL) {
            char *word = strtok(line, " :,.!?;\"");
            while(word != NULL){
                words[counter] = malloc((strlen(word) + 1) * sizeof(char));
                strcpy(words[counter], word);
                ++counter;
                word = strtok(NULL, " :,.!?;\"");
            }
        }
    }
    int num = 0;
    for (int i = 1; i < 6; ++i) {
        for (int j = 0; j < words_number_in_the_file(path); ++j) {
            if((strlen(words[j])==i && strcmp(words[j],"\n") != 0)){
                num++;
            }
        }
        printf("%d = %d\n", i, num);
        num = 0;
    }
    fclose(fpointer);
    for (int j = 0; j < counter; ++j) {
        free(words[j]);
    }
    free(words);
}

int main()
{
    read_from_file("../file.txt");
    return 0;
}