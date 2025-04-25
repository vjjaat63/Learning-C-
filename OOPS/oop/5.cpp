#include<iostream>
using namespace std;
class employee
{
public:
string name;
int salary;
 employee(string Name,int Sal)
 {
  name = Name;
  salary = Sal;
  cout<<"constructor called for "<<name<<endl;

 }
 ~ employee()
 {
  cout<<"destructor called  for  "<< name <<endl;
 }
 void display()
 {
 cout<<"Salary of " << name << " is " <<salary<<endl;
 }
};
int main()
{
employee e1("Aman",10000);
e1.display();
employee e2("Arman",12000);
e2.display();
employee e3("Baman",15000);
e3.display();
return 0;
}

