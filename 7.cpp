#include <iostream>
using namespace std;

class Number {
    int x;
public:
    // Constructor
    Number(int a = 0) {
        x = a;
    }
    // + operator
    Number operator +(Number n) {
        return Number(x + n.x);
    }
    // - operator
    Number operator -(Number n) {
        return Number(x - n.x);
    }
    // ++ operator
    Number operator ++() {
        ++x;
        return *this;
    }
    // == operator
    bool operator ==(Number n) {
        return (x == n.x);
    }
    // << operator
    ostream& operator <<(ostream &out) {
        out << x;
        return out;
    }
};

int main() {
    Number a(20), b(10), c;

    c = a + b;
    cout << "Addition: ";
    c.operator<<(cout);
    cout << endl;

    c = a - b;
    cout << "Subtraction: ";
    c.operator<<(cout);
    cout << endl;

    ++a;
    cout << "After Increment: ";
    a.operator<<(cout);
    cout << endl;

    if (a == b)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;
    return 0;
}