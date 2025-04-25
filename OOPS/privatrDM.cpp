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
    student s1;
    s1.display();
    s1.getdata( "Vishal" , 12, 155, "A+");
    s1.display();
    cout<<s1.get_grade(2521)<<endl;
    cout<<" - "<<sizeof(s1)<<" - "<<endl;
    // string s=" the energy required to remove an electron from its outermost shell is called ionisation energy";
    // cout<<" - "<<s.length()<<" - "<<endl;
    // cout<<" - "<<s.size()<<" - "<<endl;
    // cout<<" - "<<sizeof(s)<<" - "<<endl;
    return 0;
}