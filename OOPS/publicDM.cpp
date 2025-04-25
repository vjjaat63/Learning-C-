#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int division, roll_no;
    string grade;
};


int main()
{
student s1; 
s1.name = "Vishal";
s1.division = 12;
s1.roll_no = 55;
s1.grade = "A";
cout<<s1.name<<s1.roll_no;
}