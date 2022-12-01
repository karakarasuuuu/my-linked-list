#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linked_list.h"

/*
It will return a boolean value indicating the inserting process is successful or not.

- list: The list to insert the node.
- node: The node to be inserted.
*/
bool insert_node(List* list, Node* node){
    if (list == NULL || node == NULL)
        return false;

    // If the list is not initialized
    if (list->head == NULL){
        list->head = node;
        list->is_empty = false;
        return true;
    }

    // Iterates to the tail node
    Node* curr = list->head;
    while (curr->next)
        curr = curr->next;
    
    // Now the curr is the last node in list
    curr->next = node;
    return true;
}

/* 
Print the list.

- list: The list to be printed.
*/ 
bool print_list(List* list){
    Node* curr = list->head;
    while (curr){
        printf("%d\n", curr->val);
        curr = curr->next;
    }

    return true;
}