#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

node_t* init_linked_list()
{
    node_t* node = malloc(sizeof(node_t));
    return node;
}
node_t* delete_first_element(node_t** head){
    node_t* (*current) = head;
    if((*head)->next == NULL) {
        printf("The list is empty, you can not delete element");
    }
    else {
        (*current)->next = (*head)->next;
        (*head)->next = (*head)->next->next;
        free(*current);
    }
    return *head;
}
void print_list(node_t* head){
    node_t* current = head;
    while(current != NULL){
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}
