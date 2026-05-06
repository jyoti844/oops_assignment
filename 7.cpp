#include <iostream>
using namespace std;

// Function with pointer arguments
void swapPtr(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    swapPtr(&x, &y);

    cout << "After swap: x = " << x << " y = " << y;

    return 0;
}