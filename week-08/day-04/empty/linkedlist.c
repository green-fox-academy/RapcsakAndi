#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

node_t* init_linked_list()
{
    node_t* node = malloc(sizeof(node_t));
    return node;
}
int empty_or_not(node_t* head){
    node_t* list = head;
    if( !list )
        return 1;
    return 0;
}

void print_list(node_t* head){
    node_t* current = head;
    while(current != NULL){
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

