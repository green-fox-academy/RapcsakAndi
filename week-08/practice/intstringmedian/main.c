#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*float median(char* string){
    float numbers_median = 0;
    int numbers = 0;
    int i;
    int counter = 0;
    char *token;

    printf("%s", string);
    token = strtok(string, " ");
    numbers = atoi(token);
    printf("first token %d\n", numbers);

    while( token != NULL ) {
        printf("szia %s\n", token);
        token = strtok(NULL, " ");

           numbers += atoi(token);
           printf("hello %d\n", numbers);
           counter++;
    }

    numbers_median = (float) numbers/counter;

    return numbers_median;
}


int main()
{
    char *string;
    string = (char *) malloc(50 * sizeof(char));
    printf("Enter integers cointaining string devide spaces: \n");
    scanf("%[^'\n']s",string);
    string = (char *) realloc(string, strlen(string) + 1);

    float result = median(string);
    printf("\n%.2f", result);

    free(string);
    return 0;
}*/

float median(char*string){
    float numbers_median;
    int numbers = 0;

    for (int i = 0; i < strlen(string) ; ++i) {
        printf(" string i %c\n", string[i]);
        numbers = atoi(string);
    }
    int sum_digits = 0;
    int digit = 0;

    while (numbers > 0)
    {
        digit = numbers % 10;
        sum_digits  = sum_digits + digit;
        numbers /= 10;
    }
    printf("%d", sum_digits);
    numbers_median = (float) sum_digits/strlen(string);

    return numbers_median;
}

int main()
{
    char *string;
    string = (char *) calloc(50 , sizeof(char));
    printf("Enter a long integer string without any other character: \n");
    scanf("%s",string);
    string = (char *) realloc(string, strlen(string) + 1);

    float result = median(string);
    printf("\n%.2f", result);

    free(string);
    return 0;
}