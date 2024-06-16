// projects/student_marks.cpp
#include <iostream>
int main() {
    int marks[3] = {85, 90, 78};
    int search = 90;
    for(int i=0; i<3; i++) {
        if (marks[i] == search) {
            std::cout << "Found marks at student ID: " << i << "\n";
        }
    }
    return 0;
}
