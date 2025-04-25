#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the  size of the array : ";
    cin>>n;
    int a[1000];
    for (int i = 0 ; i <=n-1; i++)
    {
        cin>>a[i];
    }
    int temp=a[n-1];
    for (int i = n-1; i>=1; i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    for (int i = 0; i <=n-1; i++)
    cout<<a[i]<<" ";
}
// int a[5]={1,2,3,4,5};
// int temp=a[4];
// for (int i = 4; i >=1; i--)
// {
//     a[i]=a[i-1];
// }
// a[0]=temp;
// for (int i = 0; i < 5; i++)
// {
//     cout<<a[i]<<" ";
// }

// }
