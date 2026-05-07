#include <iostream>
using namespace std;

class Calculator {
public:
    // Inline member functions
    inline int add(int a, int b) {
        return a + b;
    }

    inline int sub(int a, int b) {
        return a - b;
    }

    inline int mul(int a, int b) {
        return a * b;
    }

    inline float divi(int a, int b) {
        return (float)a / b;
    }
};

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    Calculator obj;  // Create object of class

    cout << "Addition = " << obj.add(x, y) << endl;
    cout << "Subtraction = " << obj.sub(x, y) << endl;
    cout << "Multiplication = " << obj.mul(x, y) << endl;
    cout << "Division = " << obj.divi(x, y) << endl;

    return 0;
}