// Day-40/file_reading.cpp
#include <iostream>
#include <fstream>
#include <string>
int main() {
    std::ifstream in("sample.txt");
    std::string s;
    if (in >> s) std::cout << s << "\n";
    return 0;
}
