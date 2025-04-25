#include <iostream>
using namespace std;
int main()
{
int n;//size of array
cout<<"Enter the size of the array : ";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array : ";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<endl;
        for(int i=0;i<n-2;i++)
        {
                for(int j=0;j<n-1;j++)
                {
                  if(arr[j]>arr[j+1])
                   swap(arr[j],arr[j+1]);
                }
        }
cout<<"sorted array is : "<<endl;
for(int k=0;k<n;k++)
        {
          cout<<arr[k]<<" ";
        }
}
