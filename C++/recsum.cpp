#include <iostream>
using namespace std;
int sum(int n);
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    // cout<<(n*(n+1))/2<<endl;
    cout<<sum(n);
}
int sum(int n)
{
    if (n==1)
    {
            return 1;
    }
    return n+sum(n-1);
}