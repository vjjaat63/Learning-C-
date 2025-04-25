#include<iostream>
using namespace std;
int main()
{
char health,loc,gender;
int age;
cout<<"Health : ";  cin>>health;
cout<<"Locality : ";cin>>loc;
cout<<"Gender : ";  cin>>gender;
cout<<"Age : ";     cin>>age;
if(health=='e' && age>=25 && age<=35 && loc=='c' && gender=='m')
{
cout<<"The person is insured";
cout<<"Premium is Rs 4 lakh per year";
cout<<"Policy amount cannot exceed Rs 2 lakh";
}
else if(health=='e' && age>=25 && age<=35 && loc=='c' && gender=='f')
{
cout<<"The person is insured";
cout<<"Premium is Rs 3 lakh per year";
cout<<"Policy amount cannot exceed Rs 1 lakh";
}
else if(health=='p' && age>=25 && age<=35 && loc=='v' && gender=='m')
{
cout<<"The person is insured";
cout<<"Premium is Rs 6 lakh per year";
cout<<"Policy amount cannot exceed Rs 10,000";
}
else
{
cout<<"The person is not insured ";
}
return 0;
}
