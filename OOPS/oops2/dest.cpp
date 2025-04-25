#include<iostream>
using namespace std;
class student
{
int roll;
string name;
public:
  student(int roll,string name)
  {
    cout<<"Constructor Called"<<endl;
    this->roll = roll;
    this->name = name;
  }

  void show()
  {
    cout<<endl<<"Roll No. : "<<roll <<" | Name : "<<name<<endl;
  }

  ~student()
  {
    cout<<"Destructor Called"<<endl;
  }
};

int main()
{
student s1(55,"Vishal");
s1.show();
}
