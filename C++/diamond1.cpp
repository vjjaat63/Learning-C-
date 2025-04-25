#include<iostream>
using namespace std;
int main()
{
    int row,column,n;
    // cout<<"the required height of figure will be (2n-1) times where n = ";
    // cin>>n;
    for (row=1;row<=4;row++)
    {
        for (column=1;column<=4-row;column++)
        {
            cout<<"  ";
        }
        for (column=1;column<=row;column++)
        {
            cout<<"* ";
            cout<<"  ";
        }
        cout<<endl;
    }
    for (row=1;row<=4;row++)
    {
        for (column=1;column<row;column++)
        {
            cout<<"  ";
        }
        for (column=4-row;column>=0;column--)
        {
            cout<<"* ";
            cout<<"  ";
        }
        
        cout<<endl;
    }
    
}