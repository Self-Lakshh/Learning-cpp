// Day-31/encapsulation.cpp
#include <iostream>
class Bank {
private:
    double bal = 0;
public:
    double getBal() { return bal; }
};
int main() {
    Bank b;
    std::cout << b.getBal() << "\n";
    return 0;
}
