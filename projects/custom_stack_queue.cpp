// projects/custom_stack_queue.cpp
#include <iostream>
class Stack {
private:
    int arr[10];
    int top = -1;
public:
    void push(int v) { arr[++top] = v; }
};
int main() {
    Stack s;
    s.push(5);
    return 0;
}
