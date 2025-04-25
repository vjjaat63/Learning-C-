#include <iostream>
using namespace std;

int main()
{
    int row,column,space;
    for (row=1;row<=5;row++)
    {
    for (column=1;column<=5-row;column++)
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