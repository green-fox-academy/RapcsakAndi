#include <stdio.h>

/* Pokemon database!
 * You should store the following data in a structure
 *  - the name of the pokemon (which is shorter than 256 characters)
 *  - the age of the pokemon (in years)
 *  - the strength of the pokemon (between 0.0-10.0)
 *  - the speed of the pokemon (between 0.0-10.0)
 *  - the type of the pokemon (as a custom type, see below)*/
typedef enum pokemon_type{
    INVALID_TYPE, NORMAL, FIRE, WATER, ELECTRIC, GRASS, ICE, FIGHTING, POISON, GROUND,
    FLYING, PSYCHIC, BUG, ROCK, GHOST, DRAGON, DARK, STEEL, FAIRY
}pokemon_type_t;

 typedef struct pokemon{
     char name[50];
     int age;
     float strength;
     float speed;
     pokemon_type_t type;
 }pokemon_t;
 /* You should store the pokemon type in an enumeration
 * the valid types are:
 *  - normal
 *  - fire
 *  - water
 *  - electric
 *  - grass
 *  - ice
 *  - fighting
 *  - poision
 *  - ground
 *  - flying
 *  - psychic
 *  - bug
 *  - rock
 *  - ghost
 *  - dragon
 *  - dark
 *  - steel
 *  - fairy*/

 /* The "pokemon"-s are stored in an array.*/

 /* Write the following functions:
 * 1) Get faster pokemons than
 *      - parameters:
 *          - array
 *          - array length
 *          - speed
 *      - it returns the count of the faster pokemons than the parameter "speed"*/
 int get_faster_pokemon(pokemon_t* pokemon_array, int size, float speed){
     int count_of_faster_pokemon = 0;
     float max_speed = 0;
     for (int i = 0; i < size; ++i) {
         if(pokemon_array[i].speed > max_speed){
             max_speed = pokemon_array[i].speed;
             count_of_faster_pokemon = i;
         }
     }
     return count_of_faster_pokemon;
 }
 /*2) Get type count
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the count of pokemons which are "type"*/

 int get_type_count (pokemon_t* pokemon_array, int size,pokemon_type_t type){
     int count_of_type = 0;
     for (int i = 0; i <size; ++i) {
         if(type == NORMAL)
             count_of_type ++;
     }
     return count_of_type;
 }
 /*3) Get strongest type
 *      - parameters:
 *          - array
 *          - array length
 *          - strength
 *      - it returns the type of the strongest pokemon*/

 char *convert(pokemon_type_t type){
     switch (type){
         case INVALID_TYPE:
             return "INVALID_TYPE";
         case NORMAL:
             return "NORMAL";
         case FIRE:
             return "FIRE";
         case WATER:
             return "WATER";
         case ELECTRIC:
             return "ELECTRIC";
         case GRASS:
             return "GRASS";
         case ICE:
             return "ICE";
         case FIGHTING:
             return "FIGHTING";
         case POISON:
             return "POISON";
         case GROUND:
             return "GROUND";
         case FLYING:
             return "FLYING";
         case PSYCHIC:
             return "PSYCHIC";
         case BUG:
             return "BUG";
         case ROCK:
             return "ROCK";
         case GHOST:
             return "GHOST";
         case DRAGON:
             return "DRAGON";
         case DARK:
             return "DARK";
         case STEEL:
             return "STEEL";
         case FAIRY:
             return "FAIRY";
     }
     return "invalid return valid";
 }

pokemon_type_t get_strongest_type(pokemon_t* pokemon_array, int size, float strength){
     pokemon_type_t type_of_strongest = INVALID_TYPE;
     float strenght_max = 0;
     for (int i = 0; i <size; ++i) {
         if(pokemon_array[i].strength > strenght_max){
             strenght_max = pokemon_array[i].strength;
             type_of_strongest = pokemon_array[i].type;
         }
     }
     return type_of_strongest;
 }
 /*4) Get maximal strength of a type
 *      - parameters:
 *          - array
 *          - array length
 *          - type
 *      - it returns the highest strength among the "type" type pokemons
 *
 * Don't forget to handle invalid inputs (NULL pointers, invalid values etc.)
 */

float get_maximal_strength_of_a_type(pokemon_t* pokemon_array, int size, pokemon_type_t type){
     float highest_strenght = 0;
     for (int j = 0; j < size; ++j) {
         if(pokemon_array[j].type == type){
             highest_strenght = pokemon_array[j].strength;
         }
     }
     return highest_strenght;
}

int main()
{

    pokemon_t pokemon_array[6] = {{.name = "Pikachu", .age = 8, .strength = 7.5, .speed = 5.5, FIRE},
                             {.name = "Jigglypuff", .age = 3, .strength = 9.3, .speed = 4, FAIRY},
                             {.name = "Snorlax", .age = 21, .strength = 5.6, .speed = 2, NORMAL},
                             {.name = "Diglett", .age = 10, .strength = 4.2, .speed = 8, GROUND},
                             {.name = "Eevee", .age = 4, .strength = 8.2, .speed = 7, NORMAL},
                             {.name = "Krabby", .age = 15, .strength = 6.7, .speed = 6, WATER}};

    printf("%d\n",get_faster_pokemon(pokemon_array, 6, 2));
    printf("%d\n",get_type_count (pokemon_array, 6,NORMAL));
    pokemon_type_t strongest_type = get_strongest_type(pokemon_array, 6, 5);
    char* strongest_type_text = convert(strongest_type);
    printf("%s\n",strongest_type_text);
    printf("%f\n",get_maximal_strength_of_a_type(pokemon_array, 6, NORMAL));

    return 0;
}