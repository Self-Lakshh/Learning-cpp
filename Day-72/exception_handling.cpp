// Day-72/exception_handling.cpp
#include <iostream>
#include <stdexcept>
double div(double a, double b) {
    if(b==0) throw std::runtime_error("div0");
    return a/b;
}
int main() {
    try { div(5,0); } catch(...) {}
    return 0;
}
