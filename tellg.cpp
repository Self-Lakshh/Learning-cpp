// tellg.cpp
#include <iostream>
#include <fstream>
int main() {
    std::ifstream in("tellg.cpp");
    std::cout << "Start: " << in.tellg() << "\n";
    in.close();
    return 0;
}
