#include <stdio.h>
 /* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter it returns -1.
 */

 int get_fibonacci_number(int n){
     int fibonacci_number;
     int next;
     int first = 0;
     int second = 1;

     for (int i = 0; i < n; i++) {
         if(i <= 1)
             next = i;
         else {
             next = first + second;
             first = second;
             second = next;
         }
     }
    return second;
 }
int main()
{

    int n;

    printf("Type the element you want to receive: \n");
    scanf("%d", &n);
    if (n <= 0)
        return -1;

    printf("%d",get_fibonacci_number(n));
    return 0;
}