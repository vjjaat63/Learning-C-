#include<iostream>
using namespace std;
int perimeter(int l,int b)
{
 return 2*(l+b);
}
int Area(int l, int b)
{
 return l*b;
}
int main()
{
int l,b;
cout<<"Enter the length and breadth of rectangle : ";
cin>>l>>b;
int area = Area(l,b);
int peri = perimeter(l,b);

if(area>peri)
 cout<<"Area is greater";
else if(peri>area)
 cout<<"perimeter is greater";
else 
 cout<<"both are equal";

return 0;
}
