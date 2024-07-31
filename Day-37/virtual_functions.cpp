// Day-37/virtual_functions.cpp
#include <iostream>
class Animal {
public:
    virtual void sound() { std::cout << "Sound\n"; }
};
class Dog : public Animal {
public:
    void sound() override { std::cout << "Woof\n"; }
};
int main() {
    Animal *a = new Dog();
    a->sound();
    delete a;
    return 0;
}
