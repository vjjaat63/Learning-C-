#include<iostream>
using namespace std;
int main()
{
    int a[1000];//{42,543,423,23,0,1}
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j=i+1; j>0; j--)
        {
            if (a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
            }
            else
            break;  
        }
        
    }
    cout<<"Here is the sorted array using the insertion sort : ";
    for (int i = 0; i < n; i++)
    cout<<a[i]<<" ";

}