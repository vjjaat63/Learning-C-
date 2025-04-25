#include <iostream>
using namespace std;

double power(double x, double n)
{
    if (n == 0)
        return 1;

    if (n < 0) // when power is negative
        return 1 / power(x, -n);

    return x * power(x, n - 1);
}

int main()
{
    double num, pow;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Enter the power : ";
    cin >> pow;

    double ans = power(num, pow); // storing the ans

    cout << num << " to the power " << pow << " is " << ans;
}
