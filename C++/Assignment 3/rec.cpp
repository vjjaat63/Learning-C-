#include<iostream>
using namespace std;
int main()
{
char c;
cout<<"Input the character : ";
cin>>c;
if(c>='a' && c<='z')
{
cout<<"The entered character is represented as "<<c<<" which is a small alphabet letter";
}
if(c>='A' && c<='Z')
{
cout<<"The entered character is represented as "<<c<<" which is a big alphabet letter";
}
if(c>='0' && c<='9')
{
cout<<"The entered character is represented as "<<c<<" which is a digit";
}
else
{
cout<<"The entered character is represented as "<<c<<" which is a symbol";
}
return 0;
}
