#include <iostream>
#include <fstream>
using namespace std;

class Bank
{
public:
    // Create new account
    void createAccount()
    {
        string name;
        int accNo;
        float balance;
        int pinNo;

        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cout << "Enter PinCode: ";
        cin >> pinNo;

        ofstream file("bank.txt", ios::app);
        file << name << " " << accNo << " " << balance << " " << pinNo << endl;
        file.close();

        cout << "Account Created Successfully!\n";
    }

    // Deposit money
    void deposit()
    {
        int accNo;
        float amount;
        int pinNo;

        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Amount to Deposit: ";
        cin >> amount;
        cout << "Enter PinCode: ";
        cin >> pinNo;

        updateBalance(accNo, amount, pinNo, true);
    }

    // Withdraw money
    void withdraw()
    {
        int accNo;
        float amount;
        int pinNo;

        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;
        cout << "Enter PinCode: ";
        cin >> pinNo;

        updateBalance(accNo, amount, pinNo, false);
    }

    // Display all previous data
    void displayAll()
    {
        int bankIdCode = 998877;
        int entercode;
        cout << "Enter the bankIdCode: ";
        cin >> entercode;
        ifstream file("bank.txt");
        string name;  
        int acc;
        float bal;
        int pin;

        cout << "\n--- PREVIOUS ACCOUNT DATA ---\n";
        if (bankIdCode != entercode)
        {
            cout << "Access Denied! Invalid Bank ID Code.\n";
            return;
        }

        while (file >> name >> acc >> bal >> pin )
        {
            cout << "Name: " << name
                 << " | Account No: " << acc
                 << " | Balance: " << bal << endl;
        }

        file.close();
    }

    void displayOwn()
    {
        int accNo;
        int pinNo;
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter PinCode: ";
        cin >> pinNo;
        ifstream file("bank.txt");

        string name;
        int acc;
        float bal;
        int pin;
        bool found = false;

        cout << "\n--- YOUR ACCOUNT DATA ---\n";

        while (file >> name >> acc >> bal >> pin)
        {
            if (acc == accNo && pin == pinNo)
            {
                cout << "Name: " << name
                     << " | Account No: " << acc
                     << " | Balance: " << bal << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Invalid Account Number or Pin!\n";
        }

        file.close();
    }

private:
    // Update balance in file
    void updateBalance(int accNo, float amount, int pinNo, bool isDeposit)
    {
        ifstream file("bank.txt");
        ofstream temp("temp.txt");

        string name;
        int acc;
        float bal;
        int pin;
        bool accFound = false; /// account h ya nhi
        bool pinMatch = false; /// account h ya nhi

        while (file >> name >> acc >> bal >> pin)
        {
            if (acc == accNo)
            {
                accFound = true;
                if (pin == pinNo)
                {
                   pinMatch = true;
                    if (isDeposit)
                    { // deposit krne h
                        if (amount > 0)
                        {
                            bal = bal + amount;
                            cout << "Money Deposited Successfully!\n";
                        }
                        else
                        {
                            cout << "Invalid Amount!\n";
                        }
                    }
                    else
                    { /// withdraw krne h
                        if (amount <= 0 || amount > bal)
                        {
                            cout << "Insufficient Balance!\n";
                        }
                        else
                        {
                            bal = bal - amount;
                            cout << "Money Withdrawn Successfully!\n";
                        }
                    }
                }
                else
                {
                    cout << "Invalid pinCode \n Pls try Again !!";
                }
            }

            temp << name << " " << acc << " " << bal << " " << pin << endl;
        }

        file.close();
        temp.close();

        remove("bank.txt");
        rename("temp.txt", "bank.txt");

        if (!accFound)
        {
            cout << "Account Number Not Found!\n"; ////account nhi h
        }
         else if (!pinMatch)
            cout << "Invalid PinCode!\n";
    }
};

int main()
{
    Bank b;
    int choice;

    do
    {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display All Accounts\n";
        cout << "5. Display Your Account\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b.createAccount();
            break;

        case 2:
            b.deposit();
            break;

        case 3:
            b.withdraw();
            break;

        case 4:
            b.displayAll();
            break;

        case 5:
            b.displayOwn();
            break;
        case 6:
            cout << "Thank you! Program closed.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}