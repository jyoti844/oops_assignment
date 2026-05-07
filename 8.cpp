#include <iostream>
using namespace std;

// Base class
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

// Single Inheritance
class B : public A {
public:
    void showB() {
        cout << "Class B - Single Inheritance" << endl;
    }
};

// Multilevel Inheritance
class C : public B {
public:
    void showC() {
        cout << "Class C - Multilevel Inheritance" << endl;
    }
};

// Another base class for Multiple Inheritance
class D {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

// Multiple + Hybrid Inheritance
class E : public C, public D {
public:
    void showE() {
        cout << "Class E - Multiple/Hybrid Inheritance" << endl;
    }
};

// Hierarchical Inheritance
class F : public A {
public:
    void showF() {
        cout << "Class F - Hierarchical Inheritance" << endl;
    }
};

int main() {

    // Single Inheritance
    B b;
    b.showA();
    b.showB();

    cout << endl;

    // Multilevel Inheritance
    C c;
    c.showA();
    c.showB();
    c.showC();

    cout << endl;

    // Multiple + Hybrid Inheritance
    E e;
    e.showA();
    e.showB();
    e.showC();
    e.showD();
    e.showE();

    cout << endl;

    // Hierarchical Inheritance
    F f;
    f.showA();
    f.showF();

    return 0;
}