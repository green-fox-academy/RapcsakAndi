#ifndef SIZE_LINKEDLIST_H
#define SIZE_LINKEDLIST_H

typedef struct node{
    int value;
    struct node* next;
}node_t;

node_t* init_linked_list();
int number_of_nodes(node_t* head);
void print_list(node_t* head);

#endif //SIZE_LINKEDLIST_H
