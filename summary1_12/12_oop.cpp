#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal sound" << endl; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Woof!" << endl; }
};

int main() {
    Dog dog;
    dog.sound();
    return 0;
}
