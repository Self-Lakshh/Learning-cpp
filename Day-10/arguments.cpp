// Day-10/arguments.cpp
#include <iostream>
void swap(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}
int main() {
    int a = 1, b = 2;
    swap(a, b);
    std::cout << a << " " << b << "\n"; // swaps!
    return 0;
}
