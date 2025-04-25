#include<iostream>
using namespace std;
int power(int a,int b)
{
int ans=1;
for(int i=1;i<=b;i++)
{
ans*=a;
}
return ans;
}
int main()
{
int num,po,ans2;
cout<<"Enter the number and its power :";
cin>>num>>po;
ans2=power(num,po);
cout<<"Answer is : "<<ans2<<endl;
return 0;
}
