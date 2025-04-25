#include<iostream>
using namespace std;
int main()
{
    int row,column,order;
    cout<<"enter the order of matrix :";
    cin>>order;
    for (row=1;row<=order;row++)
    {
        for (column=1;column<=order-row;column++)
        {
            cout<<" ";
        }
        for (column=1;column<=row;column++)
        {
            cout<<column;
           // cout<<" ";
        }
        cout<<endl;
    }
    
}