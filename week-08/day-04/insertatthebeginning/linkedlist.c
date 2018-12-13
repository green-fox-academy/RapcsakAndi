#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

node_t* init_linked_list()
{
    node_t* node = malloc(sizeof(node_t));
    return node;
}
node_t* insert_to_the_beginning(node_t* head, int value){

    node_t* node_first = malloc(sizeof(node_t));

    node_first->next = head;
    node_first->value = value;

    return node_first;
}
void print_list(node_t* head){
    node_t* current = head;
    while(current != NULL){
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}