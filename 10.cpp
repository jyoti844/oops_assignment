#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function (makes this class abstract)
    virtual void area() = 0;
};

// Derived class 1
class Circle : public Shape {
    float r;
public:
    Circle(float radius) {
        r = radius;
    }

    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
    float l, b;
public:
    Rectangle(float length, float breadth) {
        l = length;
        b = breadth;
    }

    void area() {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

int main() {
    Shape *s;

    Circle c(5);
    Rectangle r(4, 6);

    s = &c;
    s->area();   // runtime polymorphism

    s = &r;
    s->area();   // runtime polymorphism

    return 0;
}