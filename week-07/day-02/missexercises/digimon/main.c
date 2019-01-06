#include <stdio.h>
#include <string.h>

/* Digimon database!
 * You should store the following data in a structure
 *  - the name of the digimon (which is shorter than 128 characters)
 *  - the age of the digimon (in years)
 *  - the health of the digimon (between 0-100)
 *  - the name of the tamer (which is shorter than 256 characters)
 *  - the digivolution level of the digimon (as a custom type, see below)*/
typedef enum digivolution{
    BABY, IN_TRAINING, ROOKIE, CHAMPION, ULTIMATE, MEGA
}digivolution_t;

typedef struct digimon{
    char name[50];
    int age;
    int health;
    char tamer[256];
    digivolution_t digi;
}digimon_t;
/* You should store the digivolution level in an enumeration
 * the valid digivolution levels are:
 *  - baby
 *  - in-training
 *  - rookie
 *  - champion
 *  - ultimate
 *  - mega*

 * The digimons are stored in an array.*/
digimon_t* digimon_array;
/* Write the following functions:
 * 1) Get minimum health index
 *      - parameters:
 *          - array
 *          - array length
 *      - it returns the index of the minimal health digimon in the "array"*/
int get_minimum_health_index(digimon_t* digimon_array, int size){
    int index_minimum_health = 0;
    int minimum_health = digimon_array[0].health;
    for (int i = 0; i < size; ++i) {
        if(digimon_array[i].health<minimum_health){
            minimum_health = digimon_array[i].health;
            index_minimum_health = i;
        }
    }
    return index_minimum_health;
}
/*2) Get same digivolution level count
 *      - parameters:
 *          - array
 *          - array length
 *          - digivolution level
 *      - it returns the count of digimons which are at "digivolution level"*/
int get_same_digivolution_level(digimon_t* digimon_array, int size, digivolution_t digi){
    int count_same_level = 0;
    for (int i = 0; i <size; ++i) {
        if(digimon_array[i].digi==digi)
            count_same_level++;
    }
    return count_same_level;
}
/*3) Get same tamer count
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the count of the digimons which have the same tamer as "tamer name"*/
int get_same_tamer_count(digimon_t* digimon_array, int size, char* tamer){
    int count_same_tamer_name = 0;
    for (int i = 0; i <size; ++i) {
        if(strcmp(tamer, digimon_array[i].tamer) == 0)
            count_same_tamer_name++;
    }
    return count_same_tamer_name;
}
/* 4) Get average health of the same tamer
 *      - parameters:
 *          - array
 *          - array length
 *          - tamer name
 *      - it returns the average health of the digimons which have the same tamer as "tamer name"
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */
float get_average_health_of_the_same_tamer(digimon_t* digimon_array, int size, char* tamer){
    float average = 0;
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if(strcmp(tamer, digimon_array[i].tamer) == 0){
            average += digimon_array[i].health;
            counter++;
        }
    }
    return (float)average/counter;
}

int main()
{
    digimon_t digimon_array[6] = {{.name = "Seadragon", .age = 100, .health = 86, .tamer = "Sora", MEGA },
                             {.name = "Hermmon", .age = 72, .health = 92, .tamer = "Izzy", IN_TRAINING },
                             {.name = "Pumpmon", .age = 56, .health = 43, .tamer = "Matt", MEGA },
                             {.name = "Vamdemon", .age = 102, .health = 22, .tamer = "Mimi", BABY },
                             {.name = "Beelzebumon", .age = 230, .health = 11, .tamer = "Izzy", ULTIMATE },
                             {.name = "Belial", .age = 27, .health = 73, .tamer = "Izzy", MEGA }};

    printf("minumum health index is: %d\n",get_minimum_health_index(digimon_array, 6));
    printf("same digi level is: %d\n",get_same_digivolution_level(digimon_array, 6, MEGA));
    printf("same tamer count is: %d\n",get_same_tamer_count(digimon_array, 6, "Izzy"));
    printf("average health is: %.2f\n",get_average_health_of_the_same_tamer(digimon_array, 6, "Izzy"));

    return 0;
}