// projects/student_management.cpp
#include <iostream>
class Student {
public:
    std::string name;
    void print() { std::cout << name << "\n"; }
};
int main() {
    Student s;
    s.name = "Lakshya";
    s.print();
    return 0;
}
