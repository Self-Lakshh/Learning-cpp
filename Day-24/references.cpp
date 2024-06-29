// Day-24/references.cpp
#include <iostream>
int main() {
    int x = 50;
    int &ref = x;
    ref = 100;
    std::cout << "Val: " << x << "\n";
    return 0;
}
