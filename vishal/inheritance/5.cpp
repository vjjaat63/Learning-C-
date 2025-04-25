#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    string address;
    string city;
    string state;
    int zip;
    string phoneNo;

    struct DOB
    {
        int day, month, year;
    } dob;

public:
    void inputData()
    {
        cout << "Enter First Name: ";
        cin >> firstName;

        cout << "Enter Last Name: ";
        cin >> lastName;

        cout << "Enter Address: ";
        cin.ignore(); // Clear the newline left in the buffer
        getline(cin, address);

        cout << "Enter City: ";
        getline(cin, city);

        cout << "Enter State: ";
        getline(cin, state);

        cout << "Enter Zip: ";
        cin >> zip;

        cout << "Enter Phone Number: ";
        cin.ignore(); // Clear newline before getting phone number
        getline(cin, phoneNo);

        cout << "Enter Date of Birth:\n";
        cout << "Day: ";
        cin >> dob.day;
        cout << "Month: ";
        cin >> dob.month;
        cout << "Year: ";
        cin >> dob.year;
    }

    void displayData() const
    {
        cout << "\nCustomer Data:\n";
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Address: " << address << endl;
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
        cout << "Zip: " << zip << endl;
        cout << "Phone No: " << phoneNo << endl;
        cout << "Date of Birth: " << dob.day << "-" << dob.month << "-" << dob.year << endl;
    }

    // Static function to create an array of Person objects
    static Person *createPersonsArray(int size)
    {
        return new Person[size];
    }
};

int main()
{
    int n;
    cout << "Enter the total number of persons: ";
    cin >> n;

    // Create array of Person objects using static function
    Person *persons = Person::createPersonsArray(n);

    for (int i = 0; i < n; ++i)
    {
        cout << "\nEntering data for Person " << (i + 1) << ":\n";
        persons[i].inputData();
    }

    cout << "\nDisplaying data for all persons:\n";
    for (int i = 0; i < n; ++i)
    {
        persons[i].displayData();
    }

    delete[] persons; // Free dynamically allocated memory
    return 0;
}
