#include <iostream>
using namespace std;

// Sum
int calc(int a, int b, int c) {
    return a + b + c;
}

// Area of rectangle
float calc(int l, int b) {
    return l * b;
}

// Volume of cube
int calc(int s) {
    return s * s * s;
}

int main() {
    cout << "Sum = " << calc(5, 3, 4) << endl;
    cout << "Area = " << calc(4, 6) << endl;  // int values
    cout << "Volume = " << calc(3) << endl;

    return 0;
}