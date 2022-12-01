#include <stdbool.h>

typedef struct node Node;
struct node {
    int val;
    Node* next;
};

typedef struct ListNode List;
struct ListNode {
    Node* head;
    bool is_empty;
};

bool insert_node(List*, Node*);
bool print_list(List*);