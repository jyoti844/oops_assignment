#include <iostream>
using namespace std;

// Conversion rates (you can update anytime)
const float INR_TO_USD = 0.012f;
const float USD_TO_INR = 83.0f;
const float INR_TO_EUR = 0.011f;

void showMenu() {
    cout << "\n=====================================\n";
    cout << "        * CURRENCY CONVERTER *       \n";
    cout << "=====================================\n";
    cout << " 1. INR ➜ USD\n";
    cout << " 2. USD ➜ INR\n";
    cout << " 3. INR ➜ EUR\n";
    cout << " 4. Exit\n";
    cout << "-------------------------------------\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    float amount;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter amount in INR: ";
            cin >> amount;
            cout << " Converted USD: " << amount * INR_TO_USD << endl;
            break;

        case 2:
            cout << "\nEnter amount in USD: ";
            cin >> amount;
            cout << " Converted INR: " << amount * USD_TO_INR << endl;
            break;

        case 3:
            cout << "\nEnter amount in INR: ";
            cin >> amount;
            cout << " Converted EUR: " << amount * INR_TO_EUR << endl;
            break;

        case 4:
            cout << "\nThank you for using Currency Converter \n";
            break;

        default:
            cout << "\n Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}