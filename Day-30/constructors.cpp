// Day-30/constructors.cpp
#include <iostream>
class Book {
public:
    Book() { std::cout << "Constructor\n"; }
    ~Book() { std::cout << "Destructor\n"; }
};
int main() {
    Book b;
    return 0;
}
