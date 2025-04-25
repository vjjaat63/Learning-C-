#include<iostream>
#include<string>
using namespace std;
class employee
 {
  public:
   int Employee_Number;
   string Employee_Name;
   int Basic_Salary;
   int All_Allowances;
   int IT;
   int Net_Salary;
   int Gross_Salary;

    void getdata(int number,string name,int basicsalary)
     {
      Employee_Number = number;
      Employee_Name = name;
      Basic_Salary = basicsalary;
     }

     void Net_Salary_Calculation()
      {
	All_Allowances = 1.23*Basic_Salary;
	Gross_Salary = Basic_Salary + All_Allowances;
	IT = 0.30*Gross_Salary;
	Net_Salary = Basic_Salary+All_Allowances-IT;
      }

     void display()
      {
	cout<<"Employee Number : "<<Employee_Number<<endl;
	cout<<"Employeee Name : "<<Employee_Name<<endl;
	cout<<"Basic Salary : "<<Basic_Salary<<endl;
	cout<<"All Allowances : "<<All_Allowances<<endl;
	cout<<"IT : "<<IT<<endl;
	cout<<"Net Salary : "<<Net_Salary<<endl;
	cout<<"Gross Salary : "<<Gross_Salary<<endl;
      }
};

int main()
{
 int num,bsal;
 string name;
 cout<<"Enter Employee Number : ";
 cin>>num;
 cout<<"Enter Employee Name : ";
 cin>>name;
 cout<<"Enter Basic Salary : ";
 cin>>bsal;
 
 employee e1;
 e1.getdata(num,name,bsal);

 e1.Net_Salary_Calculation();
 
 e1.display();

 return 0;

}
