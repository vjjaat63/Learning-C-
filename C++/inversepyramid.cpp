#include<iostream>
using namespace std;
int main()
{
    int row,column,n;
    cout<<"enter the height of the pytamid : ";
    cin>>n;
    for (row=1;row<=n;row++)
    {
        for (column=1;column<=row-1;column++)
        {
            cout<<" ";
        }
        for(column=(2*((n+1)-row)-1);column>0;column--)
        {
            cout<<"*"<<" ";
        }
       cout<<endl; 
    }
        
        
    }