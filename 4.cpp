#include <iostream>
using namespace std;

class Student {
private:
    int id;
    static int count;   // static data member

public:
    // Constructor
    Student() {
        count++;
        id = count;
    }

    void display() {
        cout << "Student ID: " << id << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}