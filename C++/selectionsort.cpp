#include<iostream>
using namespace std;
int main()
{  
    int a[1000]; //max size of array for better memory distribution or whatsoever...
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elemets of the array  : ";
    for (int i = 0; i < n-1; i++)
    cin>>a[i];
    for (int i = 0; i < n-1; i++)
    {
    for (int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    cout<<"Here is the sorted array : ";
    for (int i = 0; i < n; i++)
    cout<<a[i]<<" ";
}