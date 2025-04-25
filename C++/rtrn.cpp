#include <iostream>
using namespace std;

int main()
{
    int row,column,space,n;
    cout<<"enter the order of matrix :";
    cin>>n;
    for (row=1;row<=n;row++)
    {
    for (column=1;column<=n-row;column++)
    {
        cout<<" ";
    }
    for (space=1;space<=row;space++)
    {
        cout<<"*";
    }
    cout<<endl;
        
    }
    
}