// projects/calculator.cpp
#include <iostream>
int main() {
    int choice;
    std::cout << "1. Add\n2. Exit\nEnter: ";
    std::cin >> choice;
    if (choice == 1) {
        int x, y;
        std::cout << "Enter numbers: ";
        std::cin >> x >> y;
        std::cout << "Sum: " << x + y << "\n";
    }
    return 0;
}
