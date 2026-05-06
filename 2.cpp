#include <iostream>
using namespace std;

// Function with default arguments
float SI(float P, float R = 5, float T = 2) {
    return (P * R * T) / 100;
}

int main() {
    float P;
    cout << "Enter Principal: ";
    cin >> P;

    cout << "Simple Interest = " << SI(P) << endl;          // uses default R, T
    cout << "Simple Interest = " << SI(P, 10, 3) << endl;  // user values

    return 0;
}