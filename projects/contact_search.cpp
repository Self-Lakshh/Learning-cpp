// projects/contact_search.cpp
#include <iostream>
#include <string>
int main() {
    std::string names[2] = {"Alice", "Bob"};
    std::string search = "Alice";
    for(int i=0; i<2; i++) {
        if (names[i] == search) std::cout << "Contact details verified\n";
    }
    return 0;
}
