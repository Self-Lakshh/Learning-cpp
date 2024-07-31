// Day-37/abstract_classes.cpp
#include <iostream>
class Shape {
public:
    virtual double area() = 0;
};
class Square : public Shape {
public:
    double area() override { return 16; }
};
int main() {
    Square sq;
    std::cout << sq.area() << "\n";
    return 0;
}
