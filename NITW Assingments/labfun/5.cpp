#include<iostream>
using namespace std;
voi prolo(int cp,int sp)
{
  if(cp>sp)
   {
    cout<<"There is a loss"<<endl;
    cout<<"Loss = "<<cp-sp<<endl;
   }
  else if(cp==sp)
    cout<<"Neither profit nor loss ";
  else
   {
    cout<<"There is a profit "<<endl;
    cout<<"Profit = "<<sp-cp<<endl;
   }
}
int main()
{
 int cp,sp;
 cout<<"Enter the cost price :";
 cin>>cp;
 cout<<"Enter the selling price :";
 cin>>sp;
 prolo(cp,sp);
 return 0;
}



