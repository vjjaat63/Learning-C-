#include<iostream>
using namespace std;
void tri(int A,int B,int C)
{
 if(A+B+C==180)
   cout<<"Triangle is valid";
 else
   cout<<"Trianhle is not valid";
}
int main()
{
int A,B,C;
cout<<"Enter the angles of triangle : ";
cin>>A>>B>>C;
tri(A,B,C);
return 0;
}
