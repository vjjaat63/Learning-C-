#include<iostream>
using namespace std;
int main()
{
    int num,ans=0,quo;
    cout<<"Input the number : ";
    cin>>num;
    if (num<=4)
    {
        cout<<"The number of 0 in the factorial of "<<num<<" is : 0";
    }
    else if (num>4)
    {
        while (num)
        {
            quo=num/5;
            num=quo;
            ans=ans+quo;
        }
        cout<<"The number of 0 in the factorial of "<<num<<" is : "<<ans;
        
    }
    
    
}