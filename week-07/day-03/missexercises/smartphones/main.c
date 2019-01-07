#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Create a smartphone register application
 * Read the content of smartphones.txt and store the informations in a structure called "smartphone:
 * - the name of the gadget (which is shorter than 256 characters) (Don't bother with the underscore('_') character, it's the part of the name)
 * - the year of the release (e.g. 2016)
 * - the type of the screen size (as a custom type, see below)*/
typedef enum screen_size{
    BIG ,
    MEDIUM,
    SMALL
}screen_size_t;

typedef struct smartphone{
    char name[256];
    int year;
    screen_size_t size;
}smartphone_t;

/* In the file the size is given in cm but you should store the screen size type in an enumeration ("screen_size"),
 * the valid types are:
 *  - BIG -> (>= 15 cm)
 *  - MEDIUM -> (>= 12 cm)
 *  - SMALL -> (< 12 cm)*/

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
smartphone_t* phone_struct_from_file(char *file_name, int lines){
    smartphone_t* smartphones;
    FILE*my_file;
    my_file = fopen(file_name, "r");
    if (my_file == NULL) {
        perror("Failed: ");
        return NULL;
    }else{
        printf("The file is open\n");
    }
    smartphones = (smartphone_t*) calloc(lines, sizeof(smartphone_t));

    my_file = fopen(file_name, "r");

    char line[256];
    int i = 0;
    char *year;
    char *size;
    int screen_size = 0;
    while(fgets(line, 255, my_file)) {

        strcpy(smartphones[i].name, strtok(line, " "));
        year = strtok(NULL, " ");
        smartphones[i].year = atoi(year);
        size = strtok(NULL, " ");
        screen_size = atoi(size);

        if(screen_size < 12)
            smartphones[i].size = SMALL;
        else if(screen_size >= 12 && screen_size < 15)
            smartphones[i].size = MEDIUM;
        else
            smartphones[i].size = BIG;
        i++;
    }
    fclose(my_file);

    return smartphones;
}

 char *get_oldest_phone(smartphone_t* smartphones, int size){
    char *device_name;
    int i = 0;
    int oldest_year = smartphones[0].year;
     for (i = 0; i < size; ++i) {
         if (smartphones[i].year < oldest_year) {
             oldest_year = smartphones[i].year;
             device_name = smartphones[i].name;
         }
     }
    return device_name;
 }
/* - get_screen_size_count()
 *    - it returns the count of phones which has "screen_size" size
 *    - it is up to you how your function declaration looks like (return type and arguments)*/

int get_screen_size_count(smartphone_t* smartphones, int size, screen_size_t screen_size){
    int counter = 0;
    for (int i = 0; i <size ; ++i) {
        if(smartphones[i].size == screen_size)
            counter++;
    }
    return counter;
}

/* Your main function should invoke these functions and print the following:
 * The ..... is the oldest device in the database
 * There are .... phones with BIG (>= 15 cm) screen size
 * There are .... phones with SMALL (< 12 cm) screen size
 *
 *
 * Additionally, you need to create a new file(prices.txt) that looks like this:
 * <NAME> <PRICE>
 * <NAME> <PRICE>
 * .
 * .
 * .
 *
 * To calculate the price use the following method. The base price of every phone is 300$.
 * If the size is SMALL, that adds 0$ to the value
 * If the size is MEDIUM, that adds 100$ to the value
 * If the size is BIG, that doubles the base price.
 *
 * The price also depends on the age. For every year that passed since its release,
 * the phone loses 50$ but the maximum value that it can lose because of the age is 250$
 */

int main()
{
    int lines = count_file_lines("smartphones.txt");
    smartphone_t* smartphones = phone_struct_from_file("smartphones.txt", lines);
    char *oldest_phone = get_oldest_phone(smartphones, lines);
    int same_screen_big = get_screen_size_count(smartphones, lines, BIG);
    int same_screen_small = get_screen_size_count(smartphones, lines, SMALL);

    printf("The %s is the oldest device in the database.\n", oldest_phone);
    printf("There are %d phones with BIG (>= 15 cm) screen size.\n", same_screen_big);
    printf("There are %d phones with SMALL (< 12 cm) screen size.\n", same_screen_small);

    free(smartphones);
    return 0;
}