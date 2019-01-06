#include <stdio.h>

/*Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.*/


typedef struct house{
    char *address;
    int price;
    int number_of_room;
    float area;
} house_t;

void worth_to_buy(house_t* house);
void *wich_houses_worth_to_buy(house_t* houses, int number_of_houses);


int main()
{
    house_t houses[10];
    int a = 40;
    for (int i = 0; i < 10; ++i) {
        houses[i].area = a;
        houses[i].price = (int) (houses[i].area * 400);
        a += 5;
        printf("%d\n", houses[i].price);
    }
    worth_to_buy(houses);
    wich_houses_worth_to_buy(houses,10);
    return 0;
}

void worth_to_buy(house_t* house){
    if(house->price < 400 * house->area )
        printf("This house worth to buy.\n");
    else
        printf("This house does not worth to buy.\n");

}

void *wich_houses_worth_to_buy(house_t* houses, int number_of_houses){
    int euro_that_I_have_to_buy_a_house = 27000;
    for (int i = 0; i < number_of_houses ; ++i) {
        if(houses[i].price < euro_that_I_have_to_buy_a_house)
            printf("%d\n", i);
    }
}