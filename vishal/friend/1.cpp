#include<iostream>
using namespace std;
class B;
class A
{
 int a;

  public:

   A()
    {
     cout<<"Enter 1st number : ";
     cin>>a;
    }

   void display()
   {
    cout<<a;
   }

   friend void swap(A &a , B &b);
	
};

class B
{
 int b;

  public:

   B()
    {
     cout<<"Enter 2nd number : ";
     cin>>b;
    }

   void display()
   {
    cout<<b;
   }

    friend void swap(A &a , B &b);
};

void swap(A &a1, B &b1)
 {
  int temp;
  temp = a1.a;
  a1.a = b1.b;
  b1.b = temp;
 }

int main()
{
A A1;
B B1;

cout<<endl<<"Before swapping "<<endl;
cout<<"A1 = ";
A1.display();
cout<<" "<<" B1 = ";
B1.display();
cout<<endl;

swap(A1 , B1);
cout<<"After  swapping "<<endl;
cout<<"A1 = ";
A1.display();
cout<<" "<<" B1 = ";
B1.display();
cout<<endl;
}

