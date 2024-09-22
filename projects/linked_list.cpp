// projects/linked_list.cpp
#include <iostream>
struct Node {
    int val;
    Node* next = nullptr;
};
int main() {
    Node* head = new Node{10};
    delete head;
    return 0;
}
