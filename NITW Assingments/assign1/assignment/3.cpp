#include<iostream>
using namespace std;
void sum(int *pol1,int *pol2,int n)
{
        int pol3[n];
    for (int  i = 0; i < n; i++)
    {
        pol3[i]=pol1[i]+pol2[i];
    }
for (int i = 0; i < n; i++)
{
    cout<<pol3[i]<<" ";
}
cout<<endl;
}


void diff(int *pol1,int *pol2,int n)
{  
      int pol3[n];
    for (int  i = 0; i < n; i++)
    {
        pol3[i]=pol1[i]-pol2[i];
    }
for (int i = 0; i < n; i++)
{
    cout<<pol3[i]<<" ";
}
cout<<endl;
}


void pro(int *pol1,int *pol2,int n)
{
      int pol3[n];
    for (int  i = 0; i < n; i++)
    {
        pol3[i]=pol1[i]*pol2[i];
    }
for (int i = 0; i < n; i++)
{
    cout<<pol3[i]<<" ";
}
cout<<endl;
}


int main()
{
    int n;
    cout<<"enter the size of polynomials :       ";
    cin>>n;
    int pol1[n],pol2[n];
    cout<<"Enter the elements in first polynomial  :    "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>pol1[i];
    }
    cout<<endl;
    cout<<"Enter the elements in second polynomial  :    "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>pol2[i];
    }
    cout<<"Their sum is : ";
    sum(pol1,pol2,n);
    cout<<"Their difference is : ";
    diff(pol1,pol2,n);
    cout<<"The product of respective elements of both polynomails is : ";
    pro(pol1,pol2,n);

}