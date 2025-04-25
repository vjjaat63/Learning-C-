#include<iostream>
using namespace std;
void rotate(int a[5],int r);
int main()
{
    int a[5]={1,2,3,4.5},r;
    cout<<"enter the number of rotations : ";
    cin>>r;
    cout<<"the rotated array is : ";
    rotate(a,r);
}
void rotate(int a[5],int r)
{
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }
    
}