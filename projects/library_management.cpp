// projects/library_management.cpp
#include <iostream>
#include <vector>
#include <memory>
class Book { public: std::string t; };
int main() {
    std::vector<std::unique_ptr<Book>> shelf;
    return 0;
}
