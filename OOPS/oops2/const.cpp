#include<iostream>
using namespace std;
class Student
{
 int roll_no;
 string name;
 public:
 
  Student()    // default constructor
  {
   roll_no = 0;
   name = " ";
  }

  Student(int roll,string Name); //parameterized constructor
  
  void show()
  {
   cout<<"Roll no. " <<roll_no<<" " <<" | Name : "<<name<<endl;
}
};

Student::Student(int roll,string Name) // outside defined
{
 roll_no = roll;
 name = Name;
}
int main()
{
Student s1; // default const
Student s2(55,"Vishal"); //parameterized const
s1.show();
s2.show();
return 0;
}
