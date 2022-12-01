#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
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

    print_list(list);

    return 0;
}