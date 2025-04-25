#include <iostream>
using namespace std;

bool isArm(int num)
{
    int ans = 0, term, n = num;
    while (n)
    {
        term = n % 10;
        ans += term * term * term;
        n /= 10;
    }

    return ans == num;
}
int main()
{
    int num;
    cout << "Enter a positive integer : ";
    cin >> num;

    if (isArm(num))
        cout << "Entered number is a Armstrong number ";
    else
        cout << "Entered number is not a Armstrong number ";

    return 0;
}