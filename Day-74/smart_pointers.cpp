// Day-74/smart_pointers.cpp
#include <iostream>
#include <memory>
int main() {
    std::unique_ptr<int> p = std::make_unique<int>(5);
    return 0;
}
