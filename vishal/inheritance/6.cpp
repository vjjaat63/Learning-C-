#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PersonData
{
public:
    string firstName;
    string lastName;

    PersonData(const string &first = "", const string &last = "")
    {
        firstName = first;
        lastName = last;
    }

    void displayName() const
    {
        cout << firstName << " " << lastName;
    }
};

class Car
{
private:
    PersonData driver;
    string carName;
    int carID;
    string type;
    static int count;
    const int wheels;

public:
    Car() : wheels(4)
    { // Default constructor
        carName = "null";
        carID = 0;
        type = "unknown";
        count++;
    }

    Car(const PersonData &driver, const string &name, int id, const string &type)
        : wheels(4)
    {                          // Parameterized constructor
        this->driver = driver; // Using assignment operator
        carName = name;        // Using assignment operator
        carID = id;            // Using assignment operator
        this->type = type;     // Using assignment operator
        count++;
    }

    Car(const Car &c) : wheels(4)
    {                        // Copy constructor
        driver = c.driver;   // Using assignment operator
        carName = c.carName; // Using assignment operator
        carID = c.carID;     // Using assignment operator
        type = c.type;       // Using assignment operator
        count++;
    }

    ~Car()
    { // Destructor
        count--;
    }

    void updateCar(const string &newCarName, const string &newType)
    {
        carName = newCarName; // Using assignment operator
        type = newType;       // Using assignment operator
    }

    void printCar() const
    {
        cout << "Car ID: " << carID << "\n";
        cout << "Car Name: " << carName << "\n";
        cout << "Type: " << type << "\n";
        cout << "Driver: ";
        driver.displayName();
        cout << "\nWheels: " << wheels << endl;
    }

    int getCarID() const
    {
        return carID;
    }

    static int getCount()
    {
        return count;
    }
};

// Initialize static member
int Car::count = 0;

int main()
{
    PersonData person("Vishal", "Singh");
    const Car constantObj(person, "Maruti", 101, "Electric");

    cout << "Constant Car Object Details:\n";
    constantObj.printCar();
    cout << endl;

    vector<Car> cars;

    while (true)
    {
        int choice;
        cout << "\nMenu:\n";
        cout << "1. Add Car\n";
        cout << "2. Delete Last Car\n";
        cout << "3. Update Car Attributes\n";
        cout << "4. Print Car Details\n";
        cout << "5. Print List of All Cars\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            PersonData driver;
            string carName, type;
            int carID;

            cout << "Enter Driver First Name: ";
            cin >> driver.firstName;
            cout << "Enter Driver Last Name: ";
            cin >> driver.lastName;
            cout << "Enter Car Name: ";
            cin >> carName;
            cout << "Enter Car ID: ";
            cin >> carID;
            cout << "Enter Car Type (SUV, Wagon, Electric, etc.): ";
            cin >> type;

            Car newCar(driver, carName, carID, type);
            cars.push_back(newCar);
            cout << "Car added successfully.\n";
        }
        else if (choice == 2)
        {
            if (!cars.empty())
            {
                cars.pop_back();
                cout << "Last car deleted successfully.\n";
            }
            else
            {
                cout << "No cars to delete.\n";
            }
        }
        else if (choice == 3)
        {
            int carID;
            cout << "Enter Car ID to update: ";
            cin >> carID;

            bool found = false;
            for (int i = 0; i < cars.size(); i++)
            {
                if (cars[i].getCarID() == carID)
                {
                    string newCarName, newType;
                    cout << "Enter New Car Name: ";
                    cin >> newCarName;
                    cout << "Enter New Car Type: ";
                    cin >> newType;
                    cars[i].updateCar(newCarName, newType);
                    cout << "Car updated successfully.\n";
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Car with ID " << carID << " not found.\n";
            }
        }
        else if (choice == 4)
        {
            int carID;
            cout << "Enter Car ID to view details: ";
            cin >> carID;

            bool found = false;
            for (int i = 0; i < cars.size(); i++)
            {
                if (cars[i].getCarID() == carID)
                {
                    cars[i].printCar();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Car with ID " << carID << " not found.\n";
            }
        }
        else if (choice == 5)
        {
            cout << "\nList of All Cars:\n";
            for (int i = 0; i < cars.size(); i++)
            {
                cars[i].printCar();
                cout << "---------------------\n";
            }
        }
        else if (choice == 6)
        {
            break; // Exit program
        }
        else
        {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
