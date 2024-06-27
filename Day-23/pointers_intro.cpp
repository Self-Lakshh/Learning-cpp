// Day-23/pointers_intro.cpp
#include <iostream>
int main() {
    int val = 10;
    int *p = &val;
    std::cout << "Address: " << p << " Val: " << *p << "\n";
    return 0;
}
