#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Find the most common word in file.txt
// You need to make sure that characters like commas, colons, etc are not part of the words.
// Also make it case sensitive so words that only different in case sensitivity are the same.

typedef struct line{
    char *words;
    int words_size;

}line_t;

int count_file_lines(char *file_name){

    FILE*my_file;
    my_file = fopen(file_name, "r");
    if (my_file == NULL) {
        perror("Failed: ");
        return 0;
    }else{
        printf("The file is open\n");
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

line_t* fill_lines(char *file_name, int lines){
    line_t* text_lines;
    FILE*my_file;
    my_file = fopen(file_name, "r");
    if (my_file == NULL) {
        perror("Failed: ");
        return NULL;
    }else{
        printf("The file is open\n");
    }
    text_lines = (line_t*) calloc(lines, sizeof(line_t));

    my_file = fopen(file_name, "r");

    char line[256];
    int i = 0;
    int j= 0;
    char *high;

    while(fgets(line, 255, my_file)) {

        for (int i = 0; i <= strlen(line); ++i)
            if (ispunct(i) != 0)
                remove(ispunct(i));

        int count_coma = 1;
        for (int k = 0; k < strlen(line); ++k) {
            if(line[k] == ' ')
                count_coma++;
        }


        text_lines[i].words = (char*) calloc(count_coma, sizeof(char));
        strcpy(text_lines[i].words, strtok(line, ":"));
        j = 0;
        high = strtok(NULL, ",");
        while(high != NULL) {
            groups[i].high_array[j] = atoi(high);
            j++;
            high = strtok(NULL, ",");
        }

        groups[i].high_array_size = j;
        i++;
    }
    fclose(my_file);

    return groups;
}
char* find_the_lowest(group_t* groups, int group_size)
{
    char *lowest_median_group;
    int lowest_median = 0;
    for (int i = 0; i < group_size; ++i) {
        int actual_median = 0;
        for (int j = 0; j < groups[i].high_array_size; ++j) {
            actual_median += (groups[i].high_array[j]);
        }
        actual_median = actual_median/ groups[i].high_array_size;

        if( lowest_median> actual_median || lowest_median == 0){
            lowest_median = actual_median;
            lowest_median_group = groups[i].name;
        }
    }
    return lowest_median_group;
}
int main()
{
    return 0;
}