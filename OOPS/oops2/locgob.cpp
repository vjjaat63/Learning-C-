#include <iostream>
using namespace std;

// Global object
class GlobalObject {
public:
    GlobalObject() {
        cout << "GlobalObject constructor called." << endl;
    }
    
    ~GlobalObject() {
        cout << "GlobalObject destructor called." << endl;
    }
};

// Function demonstrating local object
void createLocalObject() {
    class LocalObject {
    public:
        LocalObject() {
            cout << "LocalObject constructor called." << endl;
        }
        
        ~LocalObject() {
            cout << "LocalObject destructor called." << endl;
        }
    };

    LocalObject local; // Local object
    // local will be destroyed when it goes out of scope
}

int main() {
    GlobalObject global; // Global object

    createLocalObject(); // Create local object inside the function

    return 0;
}

