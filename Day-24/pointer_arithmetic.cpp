// Day-24/pointer_arithmetic.cpp
#include <iostream>
int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;
    std::cout << *p << " ";
    p++;
    std::cout << *p << "\n";
    return 0;
}
