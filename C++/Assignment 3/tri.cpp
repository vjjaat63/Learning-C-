#include<iostream>
using namespace std;
int main()
{
int s1,s2,s3;
cout<<"Enter side 1 : ";
cin>>s1;
cout<<"Enter side 2 : ";
cin>>s2;
cout<<"Enter side 3 : ";
cin>>s3;
// validity of the triangle
if(s1+s2>s3 ||s1+s3>s2 ||s2+s3>s1)
{
cout<<"the triangle is valid"<<endl;
if(s1==s2 || s2==s3 || s1==s3)
{
cout<<"The triangle is isosceles"<<endl;
}
if(s1==s2 && s2==s3 && s3==s1)
{
cout<<"The triangle is equilatetral "<<endl;
}
if(s1!=s2 && s2!=s3 && s3!=s1)
{
cout<<"The triangle is scalene "<<endl;
}
if(s1*s1==s2*s2+s3*s3 || s2*s2==s1*s1+s3*s3 ||s3*s3==s1*s1+s2*s2)
{
cout<<"The triangle is right angeled"<<endl;
}
}
else
{
cout<<"the triangle is not valid";
}
return 0;
}
