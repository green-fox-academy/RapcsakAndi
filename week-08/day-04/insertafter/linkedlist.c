#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

node_t* init_linked_list()
{
    node_t* node = malloc(sizeof(node_t));
    return node;
}
node_t* insert_after(node_t* head, int value, node_t* element){
    node_t* insert_node = malloc(sizeof(node_t));

    insert_node->next = element->next;
    element->next = insert_node;
    insert_node->value = value;

    return insert_node;
}
void print_list(node_t* head){
    node_t* current = head;
    while(current != NULL){
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}
