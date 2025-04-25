#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n,first,target,last;
    cout<<"Enter the size of array : "  ;
    cin>>n;
    cout<<"Enter the elemernts of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number you want to find : ";
    cin>>target;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target)
        {
            first=i;
            break;
        }
    }
    for (int i = n-1; i>=0; i--)
    {
        if(arr[i]==target)
        {
            last=i;
            break;
        }
    }
    cout<<"the last appeatance of the "<<target<<" is at index "<<first<<endl;
    cout<<"the last appeatance of the "<<target<<" is at index "<<last<<endl;
}