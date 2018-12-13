#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

node_t* init_linked_list()
{
    node_t* node = malloc(sizeof(node_t));
    return node;
}
int number_of_nodes(node_t* head){
    node_t* current = head;
    int counter = 0;
    while(current != NULL){
        counter++;
        current = current->next;
    }
    return counter;
}
void print_list(node_t* head){
    node_t* current = head;
    while(current != NULL){
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

