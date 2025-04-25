#include<iostream>
using namespace std;
int main()
{
int a[1000],b[1000];
int m,n;
cout<<"Enter size of first array : ";
cin>>m;
cout<<"Enter the elements of first array : ";
for(int i=0;i<m;i++)
{
cin>>a[i];
}
cout<<"Enter size of second array : ";
cin>>n;
cout<<"Enter the elements of second array : ";
for(int i=0;i<n;i++)
{
cin>>b[i];
}
int c[m+n];

for(int i=0;i<m;i++)
{
c[i]=a[i];
}
for(int i=0;i<n;i++)
{
c[m+i]=b[i];
}
cout<<"The merged array is : ";
for(int i=0;i<(m+n);i++)
{
cout<<c[i]<<" ";
}
cout<<endl;
return 0;
}
