#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1) // base condition
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n < 0)
        cout << "Enter a positive number ." << endl;
    else
        cout << "Factorial of " << n << " is : " << fact(n);

    return 0;
}