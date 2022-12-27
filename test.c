#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
    // insert_node and initialization
    srand(time(NULL));
    List* list = malloc(sizeof(*list));
    for (int i = 0; i < 10; i++){
        int n = rand() % 10;
        printf("Element %d is %d.\n", i + 1, n);
        Node* curr = malloc(sizeof(*curr));
        curr->val = n;
        insert_node(list, curr);
    }
    printf("Inserting process completed.\n");
    getchar();

    // print_list
    print_list(list);

    // remove_node
    printf("Enter a number you want to remove: ");
    int removed_num = 0;
    scanf("%d", &removed_num);
    Node* removed_node = remove_node(list, removed_num);
    if (removed_node == NULL)
        printf("The number is not found!\n");
    else 
        printf("The removed number is %d.\n", removed_node->val);
        
    print_list(list);

    return 0;
}