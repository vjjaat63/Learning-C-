#include<iostream>
using namespace std;
int main()
{
char c[]="UNIVERSITY";
for(int i=0;i<5;i++)
{
for(int j=0;j<2*i+2;j++)
{
cout<<c[j]<<" ";
}
cout<<endl;
}
for(int i=4;i>0;i--)
{
for(int j=0;j<i*2;j++)
{
cout<<c[j]<<" ";
}
cout<<endl;
}
}
