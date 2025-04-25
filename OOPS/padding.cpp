#include<iostream>
using namespace std;
class student
{
    string name;
    // char alpha;
    int division,roll_no;
    string grade;

    public :
            void getdata(string n,int d,int r,string g)
                {
                    name = n;
                    division = d;
                    roll_no = r;
                    grade = g;
                }
            void display()
            {
                cout<<"here are the details : "<<endl;
                cout<<name<<" "<<division<<" "<<roll_no<<endl;
            }
            string get_grade(int pin)
            {
                if(pin==2521)
                return grade;
                else
                return " Get Lost";
            }
};

int main()
{
 student *s = new student;
 cout<<s<<endl;
 cout<<&s;
}