#include <iostream>
#include <cstring>

using namespace std;

class BankAccount {
private:
    char name[20];
    int acno;
    char actype[20];
    float bal;

public:
    BankAccount() : bal(0.0) {}

    void opbal() {
        cout << "Enter Account Holder's Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> acno;
        cout << "Enter Account Type (e.g. Savings, Current): ";
        cin >> actype;
        cout << "Enter Opening Balance: ";
        cin >> bal;
        cout << "Account created successfully!" << endl;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            bal += amount;
            cout << "Amount deposited successfully!" << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= bal) {
            bal -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void display() const {
        cout << "Account Holder's Name: " << name << endl;
        cout << "Account Number: " << acno << endl;
        cout << "Account Type: " << actype << endl;
        cout << "Current Balance: $" << bal << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    while (true) {
        cout << "\nBank Account Menu:" << endl;
        cout << "1. New Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. View Balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.opbal();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.display();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
