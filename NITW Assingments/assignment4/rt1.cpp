#include<iostream>
using namespace std;

int ans(int n)
{
int steps=0;
while(n!=1)
{
if(n%2!=0)
n=n*3+1;
else
n=n/2;
steps=steps+1;
}
return steps;
}

int main()
{
int num,steps;
cout<<"Enter the number : ";
cin>>num;
steps=ans(num);
cout<<"Total number of steps are  : "<<steps<<endl;
return 0;
}
