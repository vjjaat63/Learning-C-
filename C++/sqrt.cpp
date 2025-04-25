#include<iostream>
using namespace std;
int main()
{
    int num,i=1,sqrt;
    cout<<"enter the number : ";
    cin>>num;
while (i*i<=num)
{
    sqrt=i;
    i++;
}
if (sqrt*sqrt==num)
{
    cout<<"square root of the entered number is : "<<sqrt;
}
else
cout<<"the entered number is not a perfect square of any number "<<endl<<"square root of the entered number lies between "<<sqrt<<" and "<<sqrt+1;
}