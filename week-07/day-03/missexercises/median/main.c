#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Every line contains the name of the group and after a colon, the height of people in the group separated by commas
// Find the group where the median is the lowest.
// Note that the groups do not necessarily contain the same amount of people

typedef struct group{
    char name[50];
    int *high_array;
    int high_array_size;

}group_t;

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

group_t* fill_group(char *file_name, int lines){
    group_t* groups;
    FILE*my_file;
    my_file = fopen(file_name, "r");
    if (my_file == NULL) {
        perror("Failed: ");
        return NULL;
    }else{
        printf("The file is open\n");
    }
    groups = (group_t*) calloc(lines, sizeof(group_t));

    my_file = fopen(file_name, "r");

    char line[256];
    int i = 0;
    int j= 0;
    char *high;

    while(fgets(line, 255, my_file)) {

        int count_coma = 1;
        for (int k = 0; k < strlen(line); ++k) {
            if(line[k] == ',')
             count_coma++;
        }

        strcpy(groups[i].name, strtok(line, ":"));
        groups[i].high_array = (int*) calloc(count_coma, sizeof(int));

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
    int lines = count_file_lines("file.txt");
    group_t* groups = fill_group("file.txt", lines);
    printf("group name: %s",find_the_lowest(groups, lines));

    for (int i = 0; i < lines; ++i) {
        free(groups[i].high_array);
    }
    free(groups);

    return 0;
}