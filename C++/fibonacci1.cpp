// Find the nth term of the fibonacci series
#include <iostream>
using namespace std;
int main() 
{
    int a=0,b=1,c,n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for (int i = 1; i<=n; i++)
    {
     if (n==1)
     {
        cout<<a<<endl;
     }
     else if (n==2)
     {
        cout<<b<<endl;
     }
     else
     {
        c=a+b;
        a=b;
        b=c;
     }
    }
      cout<<c;   
    }
    
