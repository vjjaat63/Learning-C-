#include <iostream>
#include <cmath>
using namespace std;
int digit(int n)
{
    int count = 0;
    while (n)
    {
        n /= 10;
        count++;
    }
    return count;
}
void arm(int a, int b)
{
    int rem,ans=0,n=a;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans + pow(rem, b);
    }
    if (a == ans)
        cout<<"The input number is an armstrong number";
    else
        cout<<"The input number is not an armstrong number";    
}
int main()
{
    int num, power;
    cout << "Enter any number : ";
    cin >> num;
    power = digit(num);
    arm(num, power);
    return 0;
}