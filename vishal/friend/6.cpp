#include <iostream>
using namespace std;

class Bank {
private:
    int count=0;

public:

    void operator++()
    {
        count++;
    }


    void operator--()
    {
        if (count > 0)
            count--;
    }

   void displayCount()
    {
        cout<< count;
    }
};

int main()
{
  Bank bank;
  int movement;

    while (true) {
        cout <<endl<< " 1. Person enters "<<endl;
        cout << "2. Person leaves "<<endl;
        cout << "3. Current count"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Choose an option: ";
        cin >> movement;

        switch (movement) {
            case 1:
                ++bank;
                cout << "person+1 "<<endl;
                break;
            case 2:
                --bank;
                cout << "person-1"<<endl;
                break;
            case 3:
                cout << "Persons: ";
		bank.displayCount();
                break;
            case 4:
                return 0; // out of loop
		cout<<endl;
            default:
                cout << "enter a no b/w 1 to 4 as required";
        }
    }
}

