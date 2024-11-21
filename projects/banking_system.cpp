// projects/banking_system.cpp
#include <iostream>
class Acc {
public:
    double bal = 100;
    void draw(double a) {
        if(a > bal) throw std::runtime_error("overdraw");
        bal -= a;
    }
};
int main() { return 0; }
