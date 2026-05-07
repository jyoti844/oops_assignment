#include <iostream>
using namespace std;

class Calculator {
public:
    // Sum of three numbers
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
};

int main() {
    Calculator obj;  // Create object

    cout << "Sum = " << obj.calc(5, 3, 4) << endl;
    cout << "Area = " << obj.calc(4, 6) << endl;
    cout << "Volume = " << obj.calc(3) << endl;

    return 0;
}