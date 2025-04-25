#include<iostream>
using namespace std;
class operation
{
int a;
public:

  operation()
   {
     a = 0;
   }

   operation(int a)
   {
    this ->a = a;
   }
 
   inline int square()
    {
     return a*a;
    }

   inline int cube();

};

inline int operation::cube()
{
 return a*a*a;
}

int main()
{
 int n;
  cout<<"Enter an integer number : ";
  cin>>n;
 operation o(n);
 cout<<"Square of "<<n<<" is : " <<o.square()<<endl;
 cout<<"Cube of "<<n<<" is : " <<o.cube()<<endl;
 return 0;
}
