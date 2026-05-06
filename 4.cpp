#include <iostream>
using namespace std;

// Call by Value
void valueSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside Call by Value: a=" << a << " b=" << b << endl;
}

// Call by Reference
void refSwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside Call by Reference: a=" << a << " b=" << b << endl;
}

int main() {
    int x = 10, y = 20;

    valueSwap(x, y);
    cout << "After Call by Value: x=" << x << " y=" << y << endl;

    refSwap(x, y);
    cout << "After Call by Reference: x=" << x << " y=" << y << endl;

    return 0;
}