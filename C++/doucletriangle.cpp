#include<iostream>
using namespace std;
int main()
{
    int row,column,n;
    cout<<"the required height of figure will be (2n-1) times where n = ";
    cin>>n;
    for (row=1;row<=n;row++)
    {
        for (column=1;column<=row;column++)
        {
            cout<<"* ";
        }
        for (column=2*n-2*row;column>0;column--)
        {
            cout<<"  ";
        }
        for (column=1;column<=row;column++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (row=1;row<=n-1;row++)
    {
        for (column=n-1;column>=row;column--)
        {
            cout<<"* ";
        }
        for (column=1;column<=2*row;column++)
        {
            cout<<"  ";
        }
        for (column=n-1;column>=row;column--)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    return 0;
    
}
    