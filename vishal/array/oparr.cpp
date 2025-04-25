#include<iostream>
using namespace std;
void insert(int &arr,int size,int index,int value)
{
for(int i=size-1;i>index;i--)
{
int temp=arr[i+1];
arr[i+1]=arr[i];
arr[i]=temp;
}
arr[index]=value;
}
int main()
{
int n;
cout<<"Enter the size of array : ";
cin>>n;
int arr[n]={0};
int index,value;
cout<<"enter the index and the value you want in your array : "<<endl;
cin>>index>>value;
insert(arr,arr.size(),index,value);
}
