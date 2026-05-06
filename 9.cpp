#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {   // virtual function
        cout << "Animal makes sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {  // function overriding
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* a;   // base class pointer

    Dog d;
    Cat c;

    a = &d;      // runtime polymorphism
    a->sound();  // Dog version

    a = &c;
    a->sound();  // Cat version

    return 0;
}