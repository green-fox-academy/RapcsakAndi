#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    BETWEEN_15_AND_20,
    BETWEEN_20_AND_25,
    BETWEEN_25_AND_30,
    BETWEEN_30_AND_35,
    BETWEEN_35_AND_40
} age_groups;

typedef struct persons{
    char *name;
    int birth_day;
}persons_t;

/*
Implement the functions used below, and make the program work.
*/
void get_persons(char *path, int number);
void list_persons_in_age_group(persons_t* persons, int number, age_groups age);

int main()
{
    int nmbr_of_persons;

    persons_t* persons = get_persons("persons.txt", &nmbr_of_persons);
    /*
    This function should read persons data from a text file
    and return the datas into a structure-array.

    As you can see, you have to use dynamic memory allocation.
    */


    list_persons_in_age_group(persons, nmbr_of_persons, BETWEEN_30_AND_35);
    /*
    This function should print out the filtered informations based on the given age group
    to the console in the following way:

    Persons in the given age group:
    Pop Simon, aged 28
    Major Anna, aged 26
    */

    return 0;
}

void get_persons(char *path, int number){
    FILE*my_file;
    my_file = fopen("persons.txt", "r");
    if (my_file == NULL) {
        perror("Failed: ");
    }else{
        printf("The file is open");
    }
    persons_t* persons = (persons_t) calloc(number, sizeof(persons_t));
    char line[255];
    int i = 0;
    char *name;


    while(fgets(line, 255, (FILE*) my_file)) {

        persons[i].name = strtok(line, ",");
        char* birth_day = strtok(NULL, "-");
    }

    fclose(my_file);


}
void list_persons_in_age_group(persons_t* persons, int number, age_groups age){

}
