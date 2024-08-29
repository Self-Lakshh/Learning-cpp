// Day-49/iterators.cpp
#include <iostream>
#include <vector>
int main() {
    std::vector<int> v = {1, 2};
    std::vector<int>::iterator it = v.begin();
    std::cout << *it << "\n";
    return 0;
}
