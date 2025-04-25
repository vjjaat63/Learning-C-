#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a four digit number : ";
    cin >> num;
    if (num >= 1000 && num <= 9999)
    {
        cout << "The sum of the first and last digit of the entered number is : " << num / 1000 + num % 10 << endl;
    }
    else
        cout << "Enter a valid number .";
    return 0;
}
