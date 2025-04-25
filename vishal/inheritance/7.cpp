#include <iostream>
#include <string>
using namespace std;

class PersonData {
public:
    string firstName;
    string lastName;
    string address;
    string city;
    string state;
    string zip;
    string phoneNo;
};

class CustomerData : public PersonData {
public:
    int customerNumber;
    bool mailingList;

    void inputCustomerData() {
        cout << "Enter First Name: ";
        cin >> firstName;

        cout << "Enter Last Name: ";
        cin >> lastName;

        cout << "Enter Address: ";
        cin.ignore();
        getline(cin, address);

        cout << "Enter City: ";
        getline(cin, city);

        cout << "Enter State: ";
        getline(cin, state);

        cout << "Enter Zip: ";
        getline(cin, zip);

        cout << "Enter Phone No: ";
        getline(cin, phoneNo);

        cout << "Enter Customer Number: ";
        cin >> customerNumber;

        cout << "Wants to be on Mailing List (1 for Yes, 0 for No): ";
        cin >> mailingList;
    }

    void displayCustomerData() {
        cout << "\nCustomer Data:\n";
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Address: " << address << endl;
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
        cout << "Zip: " << zip << endl;
        cout << "Phone No: " << phoneNo << endl;
        cout << "Customer Number: " << customerNumber << endl;
        cout << "Mailing List: " << (mailingList ? "Yes" : "No") << endl;
    }
};

int main() {
    CustomerData customer;
    customer.inputCustomerData();
    customer.displayCustomerData();
    return 0;
}
