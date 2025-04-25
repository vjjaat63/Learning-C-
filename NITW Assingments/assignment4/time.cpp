#include<iostream>
using namespace std;
int hour(int h)
{
if(h>12)
h=h-12;
return h;
}
char median(int h)
{
char c;
if(h>12)
c='P';
else
c='A';
return c;
}
int main()
{
int h,m,H;
char c;
cout<<" Enter the hour : ";
cin>>h;
cout<<" Enter the minutes : " ;
cin>>m;
H=hour(h);
c=median(h);
cout<<"Time is : "<<H<<":"<<m<<""<<c<<endl;
return 0;
}
