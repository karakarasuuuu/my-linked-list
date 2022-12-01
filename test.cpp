#include <random>
#include <iostream>
#include "linked_list"

using namespace std;

int main(){
    random_device rd;
    linked_list list;

    for (int i = 0; i < 10; i++){
        const int n = rd();
        cout << "The current number is " << n << "." << endl;
        Node* curr = new Node(n);
        list.insert_node(curr);
    }

    list.print_list();

    return 0;
}