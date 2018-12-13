#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{
    /*This function should take a head as a parameter.
    It should return 1 if the list is empty and 0 if it is not.*/

    node_t* head = malloc(sizeof(node_t));
    head->value = 5;

    node_t* node1 = malloc(sizeof(node_t));
    head->next = node1;
    node1->value = 8;

    node_t* node2 = malloc(sizeof(node_t));
    node1->next = node2;
    node2->value = 6;

    node2->next = NULL;

    print_list(head);

    // node-t* head = NULL;
    int result = empty_or_not(head);
    printf("%d", result);

    return 0;
}