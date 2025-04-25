#include <iostream>
using namespace std;
int power(int m,int n);
int main()
{
    int m,n;
    cout<<"Enter the number : ";
    cin>>m;
    cout<<"Enter the power of the number : ";
    cin>>n;
    cout<<power(m,n);
}
int power(int m,int n)
{
    if (n==0)
    {
        return 1;
    }
    
    return m*power(m,n-1);
}