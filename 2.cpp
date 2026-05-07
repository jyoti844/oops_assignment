#include <iostream>
using namespace std;

class Interest {
public:
    // Member function with default arguments
    float SI(float P, float R = 5, float T = 2) {
        return (P * R * T) / 100;
    }
};

int main() {
    float P;
    cout << "Enter Principal: ";
    cin >> P;

    Interest obj;  // Create object of class

    cout << "Simple Interest = " << obj.SI(P) << endl;          // default R, T
    cout << "Simple Interest = " << obj.SI(P, 10, 3) << endl;  // user values

    return 0;
}