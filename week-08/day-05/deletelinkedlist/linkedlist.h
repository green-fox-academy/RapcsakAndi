#ifndef DELETELINKEDLIST_LINKEDLIST_H
#define DELETELINKEDLIST_LINKEDLIST_H

typedef struct node{
    int value;
    struct node* next;
}node_t;

node_t* init_linked_list();
node_t* delete_first_element(node_t** head);
void print_list(node_t* head);


#endif //DELETELINKEDLIST_LINKEDLIST_H
