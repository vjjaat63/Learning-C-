#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int row,column,total=0;
    cout<<"Enter the position of bishop in terms of row and column : ";
    cin>>row>>column;
    total+=min(8-row,8-column);
    total+=min(8-row,column-1);
    total+=min(row-1,8-column);
    total+=min(row-1,column-1);
    cout<<"total moves bishop can move is : "<<total;
}