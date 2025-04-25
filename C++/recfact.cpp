#include <iostream>
using namespace std;
int factor(int n);
int main()
{
    int n;
    cout << "Enter the number whose factorial  you want : ";
    cin >> n;
    if (n<0)
    {
        cout<<"You have entered a negative number and the factorial of negative numbers do nor exist ";
    }
    
    cout << factor(n);
}
int factor(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factor(n - 1);
}