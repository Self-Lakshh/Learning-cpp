// Day-43/binary_files.cpp
#include <iostream>
#include <fstream>
struct Node { int val; };
int main() {
    Node n = {5};
    std::ofstream out("out.dat", std::ios::binary);
    out.write((char*)&n, sizeof(n));
    out.close();
    return 0;
}
