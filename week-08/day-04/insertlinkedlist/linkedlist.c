#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

node_t* init_linked_list()
{
    node_t* node = malloc(sizeof(node_t));
    return node;
}
node_t* insert_to_the_end(node_t* head, int value){

    node_t* node_last = malloc(sizeof(node_t));

    node_t* current = head;
    while(current->next != NULL)
        current = current->next;
    current->next = node_last;
    node_last->next = NULL;
    node_last->value = value;

}
void print_list(node_t* head){
    node_t* current = head;
    while(current != NULL){
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}