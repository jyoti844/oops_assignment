#include <iostream>
using namespace std;

// Function taking array as argument
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Sum of array = " << sumArray(arr, 5);

    return 0;
}