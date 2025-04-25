#include<iostream>
using namespace std;
int main()
{
char c[]="ankit";
for(int i=0;i<4;i++)
{
for(int j=i;j<5;j++)
{
if(c[i]>c[j])
swap(c[i],c[j]);
}
}
for(int i=0;i<5;i++)
cout<<c[i]<<" ";
}
