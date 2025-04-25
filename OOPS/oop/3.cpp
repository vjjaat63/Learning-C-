#include<iostream>
using namespace std;
class Student
 {
 public:
  string name;
  string branch;
  int roll_no;
  int age;
  string sex;
  int marks[5];
  int percentage;
     Student(string Name,string Branch,int Roll,int Age,string Gender,int Marks[])
      {
	int sum = 0;
	name = Name;
	branch = Branch;
	roll_no = Roll;
	age = Age;
	sex = Gender;
	for(int i=0;i<5;i++){
	  marks[i]=Marks[i];
	  sum+=Marks[i];
	}
	percentage=sum/5; // as here maximum marks in a subject is also 100
       }

	void display()
	{
	if (percentage>70);
	 cout<<name<<" " <<percentage<<endl;
	}
 };
int main()
 {
 int m1[5] = {76,89,98,79,90};
 Student s1("Vishal","cse",55,22,"male",m1);
 int m2[5] = {89,98,86,95,98};
  Student s2("Vijay","cse",45,22,"male",m2);
  s1.display();
  s2.display();
 }
