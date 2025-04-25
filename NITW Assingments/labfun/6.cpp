#include <iostream>
using namespace std;

// Function to reverse a five-digit number and check equality
void reverseAndCheck(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    // Reverse the number
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
        number /= 10; // Remove the last digit
    }

    // Output the reversed number
    cout << "The reversed number is: " << reversedNumber << endl;

    // Check if the original and reversed numbers are equal
    if (originalNumber == reversedNumber) {
        cout << "The original and reversed numbers are equal." << endl;
    } else {
        cout << "The original and reversed numbers are not equal." << endl;
    }
}

int main() {
    int number;

    cout << "Enter a five-digit number: ";
    cin >> number;

    if (number < 10000 || number > 99999) {
        cout << "Please enter a valid five-digit number." << endl;
        return 1;
    }

    // Call the function to reverse the number and check equality
    reverseAndCheck(number);

    return 0;
}


