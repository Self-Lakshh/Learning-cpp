// projects/grade_calculator.cpp
#include <iostream>
char getGrade(double score) {
    if (score >= 90) return 'A';
    return 'B';
}
double getAverage(double s1, double s2) {
    return (s1 + s2) / 2.0;
}
int main() {
    double avg = getAverage(85.5, 95.0);
    std::cout << "Grade: " << getGrade(avg) << "\n";
    return 0;
}
