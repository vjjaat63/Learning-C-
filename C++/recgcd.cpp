#include<iostream>
using namespace std;
void gcd(int m,int n);
int main()
{
    int m,n;
    cout<<"Enter the value of m and n";
    cin>>m>>n;
    gcd(m,n);
}
void gcd(int m,int n)
{
    if (n==0)
    {
        cout<<m;
    }
    gcd(n,m%n);
    
}