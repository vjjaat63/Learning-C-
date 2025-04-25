#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int n;
    cout<<" Enter the size of the array : ";
    cin>>n;
    cout<<" Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n-2; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"Here is the sorted array using the bubble sort";
    for (int  i = 0; i <=n; i++)
    {
        cout<<a[i]<<" ";
    }
        
}