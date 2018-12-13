#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{   /*Insert at the end
    This function should take a head and a value as parameters.
    It should create a new node with the given value and add it to the end of the list.*/

    node_t* head = malloc(sizeof(node_t));
    head->value = 5;

    head->next = NULL;

    insert_to_the_end(head, 8);
    insert_to_the_end(head, 4);
    insert_to_the_end(head, 2);
    print_list(head);

    return 0;
}