// projects/banking_system.cpp
#include <iostream>
class Account {
public:
    double bal = 100;
};
class Savings : public Account {};
int main() {
    Savings s;
    return 0;
}
