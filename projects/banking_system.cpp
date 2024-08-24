// projects/banking_system.cpp
#include <iostream>
#include <fstream>
class Account {
public:
    double bal = 100;
};
void save(Account &a) {
    std::ofstream file("bank.dat", std::ios::binary);
    file.write((char*)&a, sizeof(a));
}
int main() {
    Account a;
    save(a);
    return 0;
}
