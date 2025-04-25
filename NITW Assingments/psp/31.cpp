#include<iostream>
using namespace std;
struct student
{
char name[10];
int roll;
char address[50];
int marks1;
int marks2;
int marks3;
};
int main()
{
student Students[3];
for(int i=1;i<4;i++)
{
cout<<"Enter the details of student no : "<<i<<endl;
cout<<"Enter the name : " ;
cin>>Students[i].name;
cout<<endl;
cout<<"Enter the roll  no : ";
cin>>Students[i].roll;
cout<<endl;
cout<<"Enter the marks of first subject : ";
cin>>Students[i].marks1;
cout<<endl;
cout<<"Enter the marks of second subject : ";
cin>>Students[i].marks2;
cout<<endl;
cout<<"Enter the marks of third subject : ";
cin>>Students[i].marks3;
cout<<endl;
}
for(int i=1;i<4;i++)
{
cout<<"The details of the Student "<<i<<" are "<<endl;
cout<<"Name is : "<<Students[i].name<<endl;
cout<<"Roll no is : "<<Students[i].roll<<endl;
cout<<"Marks of first subject : "<<Students[i].marks1<<endl;
cout<<"Marks of second subject : "<<Students[i].marks2<<endl;
cout<<"Marks of third subject : "<<Students[i].marks3<<endl;

}
}
