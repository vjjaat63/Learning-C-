#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

class Student
{
public:
    int roll;
    long long int phone;
    string name, mail;

    Student(string name, string mail)
    {
        this->name = name;
        this->mail = mail;
        this->roll = rand() % 101;
        this->phone = createphone();
    }

    long long int createphone()
    {
        long long int r = rand() % 101;
        if (r <= 33)
            return 7000000000 + rand() % 1000000001;
        else if (r > 33 && r <= 67)
            return 8000000000 + rand() % 1000000001;
        else
            return 9000000000 + rand() % 1000000001;
    }

    void save(ofstream &out)
    {
        out << roll << " " << name << " " << phone << " " << mail << endl;
    }
};

int main()
{
    ofstream out;
    out.open("students.txt");
    Student s1("Alice", "alice@gmail.com"), s2("Bob", "bob@gmail.com"), s3("John", "john@gmail.com"), s4("Eve", "eve@gmail.com"), s5("Tom", "tom@gmail.com");
    s1.save(out);
    s2.save(out);
    s3.save(out);
    s4.save(out);
    s5.save(out);
    out.close();
    return 0;
}
