// Day-36/inheritance.cpp
#include <iostream>
class Vehicle {
public:
    void honk() { std::cout << "Beep\n"; }
};
class Car : public Vehicle {};
int main() {
    Car c;
    c.honk();
    return 0;
}
