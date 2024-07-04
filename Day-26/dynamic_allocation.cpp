// Day-26/dynamic_allocation.cpp
#include <iostream>
int main() {
    int *p = new int(100);
    std::cout << *p << "\n";
    delete p;
    return 0;
}
