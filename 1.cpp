#include <iostream>
using namespace std;

// Inline functions
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

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition = " << add(x, y) << endl;
    cout << "Subtraction = " << sub(x, y) << endl;
    cout << "Multiplication = " << mul(x, y) << endl;
    cout << "Division = " << divi(x, y) << endl;

    return 0;
}