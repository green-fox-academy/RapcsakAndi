#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Create a struct to store coordinates (for example: int x and int y)
// Create an array which can store coordinates, do not create multidimensonal arrays here
// Fill up the coordinates in the array with random number.

struct coordinate{
    int x;
    int y;
};

int main()
{
    srand((unsigned int) time(NULL));
    
    struct coordinate array[10];

    for (int i = 0; i < sizeof(array)/ sizeof(array[0]) ; ++i) {
        array[i].x = rand() % 100;
        array[i].y = rand() % 100;
    }

    for (int j = 0; j <sizeof(array)/ sizeof(array[0]); ++j) {
        printf("array.x%d = %d, ",j+1, array[j].x);
        printf("array.y%d = %d\n",j+1, array[j].y);
    }
    return 0;
}



