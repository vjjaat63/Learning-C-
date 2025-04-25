#include <iostream>
using namespace std;

int main()
{
    int row,column;
    char c = 'a';
    for (column=1; column<=5;column++)
    {
        for (row=1; row<=5;row++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
        c++;
    }
    
}