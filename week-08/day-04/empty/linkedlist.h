#ifndef EMPTY_LINKEDLIST_H
#define EMPTY_LINKEDLIST_H

typedef struct node{
    int value;
    struct node* next;
}node_t;

node_t* init_linked_list();
int empty_or_not(node_t* head);
void print_list(node_t* head);


#endif //EMPTY_LINKEDLIST_H
