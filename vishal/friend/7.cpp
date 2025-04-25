#include<iostream>
using namespace std;
class student
{
 string name;
 int marks[3];
  public :
	void get_data()
	{
	 cout<<"Enter the name : ";
	 cin>>name;
	 cout<<"Enter marks in subject 1 : ";
	 cin>>marks[0];
         cout<<"Enter marks in subject 2 : ";
         cin>>marks[1];
         cout<<"Enter marks in subject 3 : ";
         cin>>marks[2];
	}

 	void display()
	{
	 cout<<"Name : "<<name <<endl;
	 cout<<"Marks in 3 subjects : "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<endl;
	}

	friend double marrk_avg(student s);
};
double marrk_avg(student s)
 {
  return (s.marks[0]+s.marks[1]+s.marks[2])/3;
 }

int main()
{
student s;
s.get_data();
s.display();
double average = marrk_avg(s);
cout<<"Average is : "<<average<<endl;
}
