#include<iostream>
using namespace std;
class Student
{
int roll;
string name;
public:

   Student()
    {
	roll  = 0;
 	name = " ";
    }

   void set()
   {
     roll = 0;
     name = " ";
   }

   void set(int r)
    {
     	roll = r;
	name = " ";
    }

   void set(string n)
   {
     	roll = 0;
 	name = n;
   }

   void set(int r,string n)
   {
 	roll = r;
	name = n;
   }

    void show()
    {
	cout<<"Roll No. : "<<roll<<" | Name : "<<name<<endl;
    }
};

int main()
{
Student s1;
s1.set(); // call the function without arguement
Student s2;
s2.set(55); // call the function with arguement int
Student s3;
s3.set("Vishal"); // call the function with arguement string
Student s4;
s4.set(55,"Vishal");// call the function with 2 argements
s1.show();
s2.show();
s3.show();
s4.show();
return 0;
}
