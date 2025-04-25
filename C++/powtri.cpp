#include<iostream>
using namespace std;
int main()
{
    int row,column,n;
    cout<<"enter the height of the pytamid : ";
    cin>>n;
    for (row=1;row<=n;row++)
    {
        for (column=1;column<=n-row;column++)
        {
            cout<<" ";
        }
        for (column=1;column<=row;column++)
        {
            
            cout<<column<<" ";
        }
        for(column=row-1;column>0;column--)
        {
            cout<<column<<" ";
        }
       cout<<endl; 
    }
        
        
    }