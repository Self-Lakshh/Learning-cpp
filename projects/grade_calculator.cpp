// projects/grade_calculator.cpp
#include <iostream>
char getGrade(double score) {
    if (score >= 90) return 'A';
    return 'B';
}
int main() {
    std::cout << "Grade: " << getGrade(85.5) << "\n";
    return 0;
}
