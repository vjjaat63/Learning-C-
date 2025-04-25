#include<iostream>
using namespace std;
int main()
{
    int num,rem,ans=0,mul=1;
    cout<<"Enter any decimal number : ";
    cin>>num;
    while (num!=0)
    {
        rem=num%2;
        if (rem==1)
        {
            rem=0;
        }
        else
        {
            rem=1;
        }
        num/=2;
        ans=rem*mul+ans;
        mul*=2;
    }
    cout<<ans;
}