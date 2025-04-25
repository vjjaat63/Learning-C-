#include<iostream>
using namespace std;
 void newnum(int num)
 {
 int newNumber = 0;
 int multiplier = 1; // To place the digits in the correct position
    for (int i = 0; i < 5; ++i)
     {
        int digit = num % 10; // Get the last digit
        digit = (digit + 1) % 10; // Add one and wrap around
        newNumber = digit * multiplier + newNumber; // Build the new number
        multiplier *= 10; // Update the multiplier for the next digit
        number /= 10; // Remove the last digit
     }

    cout << "The new number is: " << newNumber << endl;
 }
int main()
{
 int num;
 cout<<"Enter a 5 digit number :";
 cin>>num;
 newnum(num);
    return 0;
}

