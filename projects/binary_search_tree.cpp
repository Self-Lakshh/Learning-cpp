// projects/binary_search_tree.cpp
#include <iostream>
struct Node {
    int val;
    Node* left = nullptr;
    Node* right = nullptr;
};
void print(Node* root) {
    if(!root) return;
    print(root->left);
    std::cout << root->val << " ";
    print(root->right);
}
int main() {
    Node* root = new Node{10};
    print(root);
    delete root;
    return 0;
}
