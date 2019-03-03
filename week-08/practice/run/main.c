#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*Foot Race.
Create a structure where you store:
    - the name of the racer,
    - the country of the racer,
    - the result where he/she finished.*/

typedef enum country{
    ENG, HUN, NL
}country_t;
typedef struct race{
    char name[50];
    country_t country;
    int result;

}race_t;

/*Create an enum where you store country short codes (example: HUN, ENG...),
for the country codes of the racers’ origin.
Create a function which returns a random array with unique elements, 
from 1 to the number of competitors. */

int *competitors (int number_of_racer){
    int *racer_size = (int*)calloc(number_of_racer,sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < number_of_racer; ++i) {
        int r = rand()% number_of_racer + 1;
        racer_size[0] = r;
        for (int j = 0; j < i; ++j) {
            if(racer_size[j]==r)
                break;
            else
                racer_size[j] = rand()% number_of_racer + 1;
        }
    }
    return racer_size;
 }
/*
Create a function which takes 2 parameters: 
    - a pointer to the array
    - and the length of the array
and returns the name of the fasttest one.*/

 char* get_fastest_name(race_t* race, int size){
     char* name;
     int i = 0;
     int min = race[0].result;
    for (i = 0; i <size; ++i) {
        if(race[i].result < min){
            min = race[i].result;
            name = race[i].name;
        }
    }
    return name;
 }
/*Example:
printf(get_fastest(array, len_of_array)); // output: "Viz Elek"
Create a function which takes 3 parameters: 
    - a pointer to the array,
    - the length of the array
    - and the country 
and returns the number of the competitors from the given country. 
Example:
printf(get_same_country(array, len_of_array, ENG)); // output: 2 (if there are two english competitors)
Store the competitors in an array in the main. For each competitors just assign
a value from the random result array.
*/

int main(){

    //competitors (3);
    race_t* race;
    race = (race_t*) calloc(3, sizeof(int));

    strcpy(race[0].name, "Lali");
    race[0].country = ENG;
    race[0].result = 2;
    strcpy(race[1].name, "Samu");
    race[1].country = HUN;
    race[1].result = 3;
    strcpy(race[2].name, "Gazsi");
    race[2].country = NL;
    race[2].result = 1;

    printf("fastest racer: %s", get_fastest_name(race, 3));

    free(race);

    return 0;


};