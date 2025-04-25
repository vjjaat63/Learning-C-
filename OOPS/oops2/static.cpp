#include<iostream>
using namespace std;
class members
{
static int count;
int age;
string name;
 public:
   members()
   {
    count++;
   }
   
     members(int age , string name)
    {
     this->age = age;
     this->name = name;
     count++;
    }

    void displaycount()
    {
     cout<<"Total members are :"<<count<<endl;
    }
};

int members :: count = 0;
int main()
{
members m1,m2(22,"me"),m3(23,"u");
m1.displaycount();
return 0;
}
