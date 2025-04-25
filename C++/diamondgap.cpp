#include<iostream>
using namespace std;
int main()
{
    int row,column,n;
    cout<<"enter the height of the pytamid : ";
    cin>>n;
for (row=n;row>0;row--)
{
    for (column=1;column<=row;column++)
    {
        cout<<"* ";
    }
    for (column=2*(n-row);column>0;column--)
    {
        cout<<"  ";
    }
     for (column=1;column<=row;column++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
for (row=1;row<=n;row++)
{
    for (column=1;column<=row;column++)
    {
        cout<<"* ";    
    }
    for (column=2*(n-row);column>0;column--)
    { 
    cout<<"  ";
    }
     for (column=1;column<=row;column++)
    {
        cout<<"* ";    
    }
    cout<<endl;    
}
}
