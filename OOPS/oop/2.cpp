#include<iostream>
using namespace std;
class Time
{
public:
 int h;
 int m;
 int s;
      void input()
	{
	cout<<"Enter hours :";
	cin>>h;
	cout<<"Enter minutes : ";
	cin>>m;
	cout<<"Enter seconds : ";
	cin>>s;
	}
	int convert()
	{
	return h*3600+m*60+s;
	}
};
int main()
{
Time t;
t.input();
cout<<"Total sconds are : "<<t.convert();
return 0;
}
