#include <iostream>
using namespace std;
class demo
 {
  string s;
 public:
	demo()
	{
	cin>>s;
 	}

  bool operator==(demo s2)
  {
    return s==s2.s;
  }

  string operator+(demo s2)
  {
    return s+s2.s;
  }
};

int main()
{
 cout<<"Enter first string : ";
 demo s1;
 cout<<"Enter second string : ";
 demo s2;

 bool isequal = (s1==s2);
 string add = (s1+s2);
 cout<<"Is String equal ";
  if(isequal)
	cout<<"YES";
  else
	cout<<"NO";

cout<<endl;
 cout<<"string added "<<add<<endl;
}
