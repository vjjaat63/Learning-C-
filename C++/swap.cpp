#include<iostream>
using namespace std;
void swap(int &a , int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    int c,d;
    cout<<"Enter the value of c: ";
    cin>>c;
    cout<<endl;
    cout<<"Enter the value of d: ";
    cin>>d;
    cout<<endl<<"After swapping";
    cout<<endl;
    swap(c,d);
    cout<<"c is : "<<c<<endl;
    cout<<"d is : "<<d;

}