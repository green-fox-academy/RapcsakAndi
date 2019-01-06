#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
//   printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

int main ()
{
    char str[50] = "";
    char *first_name;
    char *last_name;
    int age = 0;
    char *age_text;

    puts("Type your first name and your last name and your age");
    gets(str);

    first_name = strtok(str, " ");
    last_name = strtok(NULL, " ");
    age_text = strtok(NULL, " ");

    age = atoi(age_text);

    printf("Your name is: %s \n %s\n and you are %d years old", first_name, last_name, age);

    return 0;
}