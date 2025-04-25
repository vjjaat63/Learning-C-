#include <iostream>
using namespace std;
class Data
{public:
  string name;
  char address[20];
  int age;
  float salary;
   inline void setter(string Name , char Add[] , int Age , float Sal)
   {
    name = Name;
    for(int i=0;i<20;i++)
      address[i]=Add[i];
    age = Age;
    salary = Sal;
   }

   inline void getter()
   {
    cout<<"Name is :"<<name<<endl;
    cout<<"Address is :";
     for(int i=0;i<20;i++)
      cout<<address[i];
    cout<<endl;
    cout<<"Age is :"<<age<<endl;
    cout<<"Salary is :"<<salary<<endl;
   }
};
int main()
{
Data d1;
char adrs[20] = "near bank of india";
d1.setter("Aman",adrs,18,30000);
d1.getter();
return 0;
}

