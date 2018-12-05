#include<stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result
    int firstNumber = 22;
    int secondNumber = 13;
    int sum = secondNumber + firstNumber;
    printf("%d\n", sum);
    int sub = firstNumber-secondNumber;
    printf("%d\n", sub);
    int multi = firstNumber * secondNumber;
    printf("%d\n", multi);
    float div1 = firstNumber / (float)secondNumber;
    printf("%f\n", div1);
    int div2 = firstNumber % secondNumber;
    printf("%d\n",div2);

    return 0;
}