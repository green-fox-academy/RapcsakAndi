#include <stdio.h>
// Create a program which asks for two numbers and stores them
// Create a function which takes two numbers as parameters
// and returns 1 if the sum of the number of digits are equal and 0 otherwise

int sumDigits(int n);
int compareDigits(int n, int m);

int main(){

    int n, m;
    printf("Enter two integer: \n");
    scanf("%d%d", &n, &m);

    int result1 = sumDigits(n);
    int result2 = sumDigits(m);
    printf("%d\n%d", result1,result2);
    int newResult;
    newResult = compareDigits(result1, result2);
    printf(("%d\n", newResult));

    return 0;
}

int sumDigits(int n) {
    int sum = 0;

    if (n == 0 ) {
        return 0;
    }
    sum = n%10 + sumDigits(n/10);

    return sum;
}
int compareDigits(int n, int m){
    int compareResult = 3;
    if(sumDigits(n) == sumDigits(m))
        compareResult = 1;
    else
        compareResult = 0;
    return compareResult;
}