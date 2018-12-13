#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"


int main()
{   /* Insert to the beginning
    This function should take a head and a value as parameters.
    It should create a new node with the given value
    and add it to the beginning of the list.*/

    node_t* head = malloc(sizeof(node_t));
    head->value = 5;

    node_t* node1 = malloc(sizeof(node_t));
    head->next = node1;
    node1->value = 8;

    node_t* node2 = malloc(sizeof(node_t));
    node1->next = node2;
    node2->value = 6;

    node2->next = NULL;

    head = insert_to_the_beginning(head, 7);
    head = insert_to_the_beginning(head, 12);

    print_list(head);
    return 0;
}