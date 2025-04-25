#include<iostream>
using namespace std;
void date(int,int,int);
int main()
{
int d,m,y;
cout<<"Enter date : ";
cin>>d;
cout<<"Enter month : ";
cin>>d;
cout<<"Enter year : ";
cin>>y;
date(d,m,y);
}
void date(int d,int m,int y)
 {
if(d<28)
  {
   d+=1;
   }
if (m==2)
{
 if(d==28 && y%4==0)
   {
    d=29;
   }
  else if(d==28 && y%4!=0)
   {
   d=1;m=3;
   } 
  else if(d==29)
   {
    d=1;m=3;
   }
 }
 else if(d==29 && m!=2)
   {
    d=30;
   }
 else if(d==30 && m==4 || m==6 || m==9 || m==11)
   {
    d=1;m++;
   }
 else if(d==30 && m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
    d=31;
    }
 else if(d==31 && m==12)
   {
   d=1;m=1;y++;
   }
 else if(d==31 && m<12)
   {
   d=1;m++;
   }
cout<<d<<"/"<<m<<"/"<<y<<endl;
}
