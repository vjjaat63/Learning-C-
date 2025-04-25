#include<iostream>
using namespace std;
class demo
{

 int a;
 public:
	
 	void get(int n);
	void show()
	{ 
	 cout<<" a = "<<a<<endl;
 	}
}; 
 void demo::get(int n)
  {
   a= n;
  }
int main()
{
int n ;
cout<<"Enter the value of a :";
cin>>n;
demo d;
d.get(n);
d.show();
return 0;
}
