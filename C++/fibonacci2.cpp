// Find the rank of a number in the fibonacci series : 0,1,1,2,3,5,8,13,21,......
#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,position=2,c;
    cout<<"Enter the number: ";
    cin>>n;
    if (n==0)
    {
        cout<<"1";
    }
    else if (n==1)
    {
        cout<<"2 and 3";
    }
    else
    {
    while(b<n)
    {
    c=a+b;
    a=b;
    b=c;
    position++;
    }
    if(b==c)
    cout<<"The rank of input number in fabonacci series is : "<<position;
    else
    cout<<"The input number do not lie in the fabonacci series ";
    }
}
    