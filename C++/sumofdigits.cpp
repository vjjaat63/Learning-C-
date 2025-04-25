#include<iostream>
using namespace std;
int main()
{
    int num,ans=0,rem;
    cout<<"enter the number : ";
    cin>>num;
    while (num!=0)
    {
        rem=num%10;
        num/=10;
        ans=rem+ans;
    }
    cout<<"the sum of the digits of the input number is : "<<ans;

}