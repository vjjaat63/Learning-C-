#include<iostream>
using namespace std;
int main()
{
float t;
cout<<"Enter the time taken by the worker : ";
cin>>t;
if(t>=2 &&t<=3)
{
cout<<"The worker is highly efficient";
}
else if(t>3 && t<=4)
{
cout<<"Order the worker to improve his speed";
}
else if(t>4 && t<=5)
{ 
cout<<"Give training to the worker to inprove his speed";
}
else if(t>5)
{
cout<<"The worker is ordered to leave the company";
}
}



