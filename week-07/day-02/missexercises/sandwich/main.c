#include <stdio.h>
/*Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order*/

struct sandwich{
    char* name;
    float price;
    float weight;
};

float price_of_your_order(struct sandwich s, int number);

int main()
{
    int number;
    printf("How many sandwiches would you like to buy?\n");
    scanf("%d", &number);

    struct sandwich s1;
    s1.price = 2.5;

    float result = price_of_your_order(s1, number );
    printf("%.2f", result);
    return 0;
}

float price_of_your_order(struct sandwich s, int number){
    float price = 0;
    price = s.price * number;
    return price;
}