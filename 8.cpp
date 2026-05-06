#include <iostream>
using namespace std;

// Function returning pointer
int* getMax(int *a, int *b) {
    if (*a > *b)
        return a;
    else
        return b;
}

int main() {
    int x = 10, y = 20;

    int *p = getMax(&x, &y);

    cout << "Maximum value = " << *p;

    return 0;
}