#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Create a struct that represents a pirate
It should store:
 - name
 - an int value which tells us if he/she has a wooden leg?
 - gold count
Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
Create a function that takes an array of pirates (and it's length) then returns the name of the
richest that has wooden leg*/

typedef struct pirate {
    char name[256];
    int has_wooden_leg;
    short int gold_count;
}pirate_t;

short int sum_of_golds(pirate_t* pirates, int size);
float average_of_the_gold(pirate_t* pirates, int size);
char *pirate_name_has_wooden_leg(pirate_t* pirates, int size);

int main()
{

    pirate_t pirates[5] = {{.name = "Joe",.has_wooden_leg= 1,.gold_count = 6},
                           {.name = "Jack",.has_wooden_leg= 0,.gold_count = 5},
                           {.name = "Jill",.has_wooden_leg= 0,.gold_count = 8},
                           {.name = "Jeff",.has_wooden_leg= 1,.gold_count = 2},
                           {.name = "Jaine",.has_wooden_leg= 1,.gold_count = 3}};

    printf("sum of golds: %d\n",sum_of_golds(pirates,5));
    printf("average golds: %.2f\n",average_of_the_gold(pirates,5));
    printf("richest pirate: %s\n", pirate_name_has_wooden_leg(pirates, 5));

    return 0;
}
short int sum_of_golds(pirate_t* pirates, int size){
    short int golds = 0;
    for (int i = 0; i <size ; ++i) {
        golds += pirates[i].gold_count;
    }
    return golds;
}
float average_of_the_gold(pirate_t* pirates, int size){
    float average_gold = 0;
    for (int i = 0; i < size; ++i) {
        average_gold += (float)pirates[i].gold_count;
    }
    return (float)average_gold/size;
}
char *pirate_name_has_wooden_leg(pirate_t* pirates, int size){
    char* pirate_name = "";
    short int gold_max = 0;
    for (int i = 0; i <size; ++i) {
        if( pirates[i].gold_count > gold_max && pirates[i].has_wooden_leg){
            gold_max = pirates[i].gold_count;
            pirate_name = pirates[i].name;
        }
    }
    return pirate_name;
}