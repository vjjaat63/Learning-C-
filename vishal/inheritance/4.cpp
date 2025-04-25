#include <iostream>
#include <string>
using namespace std;

class PersonData
{
public:
    string firstName;
    string lastName;
    string address;
    string city;
    string state;
    string zip;     // Changed to string
    string phoneNo; // Changed to string
};

class CustomerData : public PersonData
{
public:
    int customerNumber;
    bool mailingList;
};

class PreferredCustomer : public CustomerData
{
public:
    double purchasesAmount;
    double discountLevel;

    void inputCustomerData()
    {
        cout << "Enter First Name: ";
        getline(cin, firstName);

        cout << "Enter Last Name: ";
        getline(cin, lastName);

        cout << "Enter Address: ";
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
        cin.ignore(); // Clear the newline character after integer input

        cout << "Wants to be on Mailing List (1 for Yes, 0 for No): ";
        cin >> mailingList;
        cin.ignore();

        cout << "Total purchases: ";
        cin >> purchasesAmount;

        // Calculate discount level based on purchasesAmount
        if (purchasesAmount >= 500 && purchasesAmount < 1000)
            discountLevel = 5;
        else if (purchasesAmount >= 1000 && purchasesAmount < 1500)
            discountLevel = 6;
        else if (purchasesAmount >= 1500 && purchasesAmount < 2000)
            discountLevel = 7;
        else
            discountLevel = 10;
    }

    void displayCustomerData()
    {
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
        cout << "Total Purchase: " << purchasesAmount << endl;
        cout << "Discount: " << discountLevel << "%" << endl;
    }
};

int main()
{
    PreferredCustomer customer;
    customer.inputCustomerData();
    customer.displayCustomerData();
    return 0;
}
