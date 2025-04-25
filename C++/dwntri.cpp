#include <iostream>
using namespace std;

int main()
{
    int row,column;
    for (row=5;row>0;row--)
    {
        for (column=5;column>=row;column--)     
           {
            cout<<column<<" ";
        }
        cout<<endl;
    }
    
}