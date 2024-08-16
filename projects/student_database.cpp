// projects/student_database.cpp
#include <iostream>
#include <fstream>
struct Student { int id; };
int main() {
    Student s = {101};
    std::ofstream out("students.dat", std::ios::binary);
    out.write((char*)&s, sizeof(s));
    out.close();
    return 0;
}
