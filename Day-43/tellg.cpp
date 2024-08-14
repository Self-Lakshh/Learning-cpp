// Day-43/tellg.cpp
#include <iostream>
#include <fstream>
int main() {
    std::ifstream in("Day-43/tellg.cpp");
    std::cout << "Start: " << in.tellg() << "\n";
    in.close();
    return 0;
}
