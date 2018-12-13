#ifndef INSERTATTHEBEGINNING_LINKEDLIST_H
#define INSERTATTHEBEGINNING_LINKEDLIST_H

typedef struct node{
    int value;
    struct node* next;
}node_t;

node_t* init_linked_list();
node_t* insert_to_the_beginning(node_t* head, int value);
void print_list(node_t* head);

#endif //INSERTATTHEBEGINNING_LINKEDLIST_H
