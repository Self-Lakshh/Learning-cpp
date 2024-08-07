// Day-40/file_writing.cpp
#include <iostream>
#include <fstream>
int main() {
    std::ofstream out("sample.txt");
    out << "Hello files\n";
    out.close();
    return 0;
}
