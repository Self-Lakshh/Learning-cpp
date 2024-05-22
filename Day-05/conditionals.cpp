// Day-05/conditionals.cpp
#include <iostream>
int main() {
    int age = 17;
    if (age >= 18) {
        std::cout << "Adult\n";
    } else {
        if (age >= 13) std::cout << "Teenager\n";
        else std::cout << "Child\n";
    }
    return 0;
}
