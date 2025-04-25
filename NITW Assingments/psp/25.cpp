#include<iostream>
using namespace std;
int main()
{
// declaring the size of first and second array 
int n1,n2;
cout<<"enter the size of first and second array : "<<endl;
cin>>n1>>n2;
int FILE1[n1],FILE2[n2];
cout<<"enter the elements of first array in ascending order : "<<endl;
for(int i=0;i<n1;i++)
cin>>FILE1[i];
cout<<"enter the elements of second array in ascending order : "<<endl;
for(int i=0;i<n2;i++)
cin>>FILE2[i];
//merging the elements if first and second array in third
int sort[n1+n2];
for(int i=0;i<n1;i++)
sort[i]=FILE1[i];
for(int i=0;i<n2;i++)
sort[n1+i]=FILE2[i];

//sorting the third array
for(int i=0;i<n1+n2-1;i++)
{
for(int j=i+1;j<n1+n2;j++)
{
if(sort[i]>sort[j])
swap(sort[i],sort[j]);
}
}
cout<<"The sorted merged list is : " <<endl;
for(int i=0;i<n1+n2;i++)
cout<<sort[i]<<" ";
}
