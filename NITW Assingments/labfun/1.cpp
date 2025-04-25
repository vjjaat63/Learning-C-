#include<iostream>
using namespace std;
int sum(int);
int main()
{
int num,ans;
cout<<"Enter any four digit number : ";
cin>>num;
ans=sum(num);
cout<<"The sum of the first and the last digit of the entered number is : "<<ans<<endl;
}
int sum(int n)
{
int a,b;
a=n%10;
b=n/1000;
return a+b;
}

