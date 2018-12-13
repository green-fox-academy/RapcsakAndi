#ifndef INSERTAFTER_LINKEDLIST_H
#define INSERTAFTER_LINKEDLIST_H

typedef struct node{
    int value;
    struct node* next;
}node_t;

node_t* init_linked_list();
node_t* insert_after(node_t* head, int value,node_t* element);
void print_list(node_t* head);


#endif //INSERTAFTER_LINKEDLIST_H
