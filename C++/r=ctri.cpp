#include <iostream>
using namespace std;

int main()
{
    int row,col;
    char c='a';
    for (row=1;row<=5;row++)
    {
    for (col=row;col>0;col--)
    {
        cout<<c<<" ";
    }
    c++;
    cout<<endl;
    
}
}