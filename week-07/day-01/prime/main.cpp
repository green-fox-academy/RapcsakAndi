#include <stdio.h>
#include <stdlib.h>

int primeOrNot(int n);

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("%d\n",primeOrNot(n));

    return 0;
}
int primeOrNot(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is neither a prime nor a composite number.");
    } else {
        if (flag == 0)
            return 1;
        else
            return 0;
    }
}