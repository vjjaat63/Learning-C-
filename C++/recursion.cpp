#include<iostream>
using namespace std;
void bd(int n);
int main()
{
    int n;
    cin>>n;
    bd(n);
}
void bd(int n)
{
    if (n==0)
    {
        cout<<"Happy Birthday";
        return;
    }
    cout<<n<<"days left for birthday\n";
    bd(n-1);
}