#include<iostream>
using namespace std;
int main()
{
    int row,column,order;
    char alpha;
   cout<<"enter the order of matrix :";
   cin>>order;
    for (row=1;row<=order;row++)
    {
        for (column=1;column<=order-row;column++)
        {
            cout<<" ";
        }
        for (alpha='A';alpha<='A'+row-1;alpha++)
        {
            cout<<alpha;
        }
        cout<<endl;
        
    }
}