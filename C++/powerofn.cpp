#include <iostream>
using namespace std;

int main()
{
    int i,number,power,ans=1;
    cout<<"enter the number :";
    cin>>number;
    cout<<"enter the power :";
    cin>>power;
    for ( i = 1; i<=power; i++)
    {
        ans=ans*number;
    }
    cout<<"answer is"<<ans;
}