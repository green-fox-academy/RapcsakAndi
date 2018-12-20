#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"


int main()
{
    /* Delete
     This function should take a head as a parameter.
    It should delete the first element of the specified list
    and return the new head of the list.*/
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

    delete_first_element(&head);

    print_list(head);

    return 0;
}