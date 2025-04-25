#include<iostream>
using namespace std;
int main()
{
int iday,rday; //iday means issued day and rday means return day
cout<<"date of issuing book :";
cin>>iday;
cout<<"book returned after :";
cin>>rday;
if(rday-iday>=6&&rday-iday<=10)
{
cout<<"NO fine ";
}
else if(rday-iday>=6&&rday-iday<=10)
{
cout<<"Fine is 1 rupee ";
}
else if(rday-iday>10 && rday-iday<=30)
{
cout<<"Fine is 5 rupees ";
}
else
{
cout<<"Your membership has been cancelled";
}
return 0;
}
