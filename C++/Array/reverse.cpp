#include <iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<" Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
     cin>>a[i];
    }
    cout<<"The entered array is : "  ;
    for (int i = 0; i < n; i++)
    {
     cout<<a[i]<<" ";
    }
    cout<<endl;
     int i=n-1,j=0;
     while (i>j)
     {
        swap(a[i],a[j]);
     i--;
     j++;
     }
     cout<<"The reverse of the array is : ";
     for(int k=0;k<5;k++)
     {
    cout<<a[k]<<" ";
     }
     cout<<endl;
     return 0;
}