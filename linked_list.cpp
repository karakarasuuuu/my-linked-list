#include <iostream>
#include "linked_list"

using namespace std;

Node::Node(int val){
    this->val = val;
    this->next = NULL;
    return;
};

int Node::get_value(){
    return this->val;
};

Node* Node::get_next(){
    return this->next;
}

bool Node::set_next(Node* node){
    this->next = node;
    return true;
}

linked_list::linked_list(){
    this->head = NULL;
    this->is_empty = true;
};

linked_list::~linked_list(){
};

bool linked_list::insert_node(Node* node){
    if (this->is_empty){
        this->head = node;
        this->is_empty = false;
        return true;
    }
    else {
        Node* curr = this->head;
        while (curr->get_next())
            curr = curr->get_next();

        curr->set_next(node);
        return true;
    }
};

bool linked_list::print_list(){
    Node* curr = this->head;
    while (curr){
        cout << curr->get_value() << endl;
        curr = curr->get_next();
    }
    return true;
};