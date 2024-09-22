// projects/linked_list.cpp
#include <iostream>
struct Node {
    int val;
    Node* next = nullptr;
};
class List {
private:
    Node* head = nullptr;
public:
    void add(int v) {
        Node* n = new Node{v};
        n->next = head;
        head = n;
    }
    ~List() {
        Node* curr = head;
        while(curr) {
            Node* nxt = curr->next;
            delete curr;
            curr = nxt;
        }
    }
};
int main() {
    List l;
    l.add(5);
    return 0;
}
