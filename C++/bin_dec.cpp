#include<iostream>
using namespace std;
int main()
{
    int num,dig,ans=0,mul=1;
    cout<<"enter the binary number : ";
    cin>>num;
    while (num!=0)
    {
     dig=num%10;
     num/=10;
     ans=dig*mul+ans;
    mul*=2;
    }
    cout<<ans;
    
}