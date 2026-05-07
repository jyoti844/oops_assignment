#include <iostream>
using namespace std;

class Number {
private:
    int x, y;

public:
    // Default constructor
    Number() {
        x = 0;
        y = 0;
        cout << "Default Constructor" << endl;
    }

    // Parameterized constructor
    Number(int a, int b) {
        x = a;
        y = b;
        cout << "Parameterized Constructor" << endl;
    }

    // Overloaded constructor
    Number(int a) {
        x = a;
        y = 0;
        cout << "Overloaded Constructor" << endl;
    }

    // Copy constructor
    Number(Number &n) {
        x = n.x;
        y = n.y;
        cout << "Copy Constructor" << endl;
    }

    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Number n1;          // Default constructor
    n1.display();

    Number n2(10, 20); // Parameterized constructor
    n2.display();

    Number n3(50);     // Overloaded constructor
    n3.display();

    Number n4(n2);     // Copy constructor
    n4.display();

    return 0;
}
