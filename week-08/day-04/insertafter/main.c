#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{
    /*This function should take a head a value and
    a pointer to an existing node as parameters.
    It should insert the new value after the given node in the specified list.*/

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

    insert_after(head, 5, node1);

    print_list(head);

    return 0;
}