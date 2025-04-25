#include<iostream>
using namespace std;
int main()
{
    int num,ans=0,mul=1,rem;
    cout<<"enter the octal number : ";
    cin>>num;
    while (num!=0)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul*=8;
    }
    cout<<ans;
}