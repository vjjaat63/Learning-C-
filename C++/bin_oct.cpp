#include<iostream>
using namespace std;
int main()
{
    int num,ans=0,ans2=0,mul=1,mul2=1,rem;
    cout<<"enter any binary number : ";
    cin>>num;
    while (num!=0) // binary to decimal
    {
        rem=num%10;
        num/=10;
        ans=rem*mul+ans;
        mul*=2;
    }
    cout<<"the decimal conversion is : "<<ans<<endl;
    while (ans!=0) // decimal to octal 
    {
        rem=ans%8;
        ans/=8;
        ans2=rem*mul2+ans2;
        mul2*=10;
    }
    cout<<"the octal conversion of the entered binary number is : "<<ans2;
}