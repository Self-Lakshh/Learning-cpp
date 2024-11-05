// Day-75/lambda_functions.cpp
#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    auto f = []() { std::cout << "Hi\n"; };
    f();
    return 0;
}
