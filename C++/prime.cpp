#include <iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"enter the number :";
    cin>>num;
    if (num<2)
    {
        cout<<"the number is not prime ";
        return 0;
    }
    else
    {
    for(i = 2; i < num; i++)
    {
    if (num%i==0)
    {
        cout<<"the number is not prime";
        return 0;
       }
    }
     cout<<"the number is prime";
        return 0;
    
        } 
    

}