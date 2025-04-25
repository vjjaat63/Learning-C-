#include<iostream>
#include<vector>
using namespace std;
void insert(int arr[],int index,int num,int n)
{
    for (int i = n; i > index; i--)
        {
            arr[i]=arr[i-1];
        }
    arr[index]=num;
        for (int i = 0; i <= n; i++)
        {
            cout<<arr[i]<<" ";
        }
    
}
void dlt(int arr[],int del,int n)
{
    int index;
    for (int i = 0; i <=n; i++)
    {
        if(arr[i]==del)
        index=i; 
    }
    for (int i = index; i <=n; i++)
    {
        arr[i]=arr[i+1];
    }
    
}
int main()
{
    int arr[1000]={0}  ;
    int n;
    cout<<"Enter the size of the array  : ";
    cin>>n;
    cout<<"Insert the elementa of the array :   ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int index,num;
    cout<<"Enter the index of input number : ";
    cin>>index;
    cout<<"Enter the number : ";
    cin>>num;
    insert(arr,index,num,n);
    int del;
    cout<<"Enter the element you want to delete :";
    cin>>del;
    dlt(arr,del,n);
}