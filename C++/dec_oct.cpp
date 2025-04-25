#include<iostream>
using namespace std;
int main()
{
    int num,ans=0,mul=1,rem;
    cout<<"enter any decimal number : ";
    cin>>num;
    while (num!=0)
    {
        rem=num%8;
        num=num/8;
        ans=rem*mul+ans;
        mul*=10;
    }
    cout<<ans;

}