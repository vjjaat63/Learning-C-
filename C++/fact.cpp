#include <iostream>
using namespace std;

int main()
{
    int num,i,fact=1;
    cout<<"enter the number :";
    cin>>num;
for ( i = 1; i <= num; i++)
{
    fact*=i;
}
cout<<"the factorial of the required number is :"<<fact;
}