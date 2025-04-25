#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"enter the year : ";
cin>>year;
if(year%4==0 || year%400==0 &&year%100!=0)
cout<<"The year you entered is a leap year";
else
cout<<"the year you entered is not a leap year";
return 0;
}
