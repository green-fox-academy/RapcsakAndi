#include <stdio.h>

char* oldEnough (int userAge);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int userAge = 0;
    printf("Enter a number:\n");
    scanf("%d", &userAge);

    oldEnough(userAge);

    return 0;
}
char* oldEnough (int userAge){
    int wantAge = 18;
    char* enoughOld = 0;
    if (userAge >= wantAge) {
        enoughOld = "You can buy alcohol";
    printf(enoughOld);
    }
    if (userAge < wantAge) {
        enoughOld = "You cant buy alcohol";
    printf(enoughOld);
    }
    return enoughOld;
}