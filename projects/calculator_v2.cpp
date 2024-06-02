// projects/calculator_v2.cpp
#include <iostream>
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int main() {
    std::cout << "Sum: " << add(5, 3) << " Sub: " << sub(5, 3) << "\n";
    return 0;
}
