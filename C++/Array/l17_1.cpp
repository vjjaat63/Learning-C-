#include<iostream>
using namespace std;
int main()
{
    int sum[20],ans=0,avg;
    for (int i = 0; i < 20; i++)
    cin>>sum[i];
    for (int i = 0; i < 20; i++)
    {
        ans=ans+sum[i];
    }
    cout<<"Sum of the given 20 numbers is : "<<ans<<endl;
    cout<<"Average of the given 20 numbers is : "<<ans/20;
}