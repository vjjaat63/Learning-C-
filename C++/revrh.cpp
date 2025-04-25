#include<iostream>
using namespace std;
int main()
{
    int row,column,order;
    cout<<"enter the order of the matrix :";
    cin>>order;
    for (row=1;row<=order;row++)
    {
        for (column=1;column<=order-row;column++)
        {
            cout<<" ";
        }
         for (column=row;column>0;column--)
         {
            cout<<column;
         }
            cout<<endl;
    }
}