// projects/expense_tracker.cpp
#include <iostream>
#include <fstream>
int main() {
    std::ofstream out("expenses.txt", std::ios::app);
    out << "Lunch 15.5\n";
    out.close();
    return 0;
}
