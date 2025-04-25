#include<iostream>
using namespace std;
class record
{
 string name;
 int age;

  public:
   record(string name,int age)
  {
   this->name = name;
   this->age = age;
  }

  void display()
  {
  cout<<"name is : "<<name<<endl;
  cout<<"age is : " <<age<<endl;
  }

  void eldest(record r1,record r2,record r3)
  {
    if(r1.age>r2.age && r1.age>r3.age)
    	cout<<"eldest is : "<<r1.name;
    if(r2.age>r1.age && r2.age>r3.age)
    	cout<<"eldest is : "<<r2.name;
    if(r3.age>r1.age && r3.age>r2.age)
    	cout<<"eldest is : "<<r3.name;
   }
};
int main()
{
record r1("abc",20),r2("cde",25),r3("fgh",30);
r1.display();
r2.display();
r3.display();
r1.eldest(r1,r2,r3);
}
