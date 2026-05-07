#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    // Constructor for dynamic initialization
    Student(int m) {
        marks = m;
    }

    void display() {
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    int x;

    cout << "Enter marks: ";
    cin >> x;

    // Value given at runtime
    Student s(x);

    s.display();

    return 0;
}