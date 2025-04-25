#include<iostream>
using namespace std;
class TIME
{
 public :
  int hours;
  int minutes;
  int seconds;
   public :
	TIME(int a, int b,int c)
	{
	 hours=a;
	 minutes=b;
	 seconds=c;
	}
	  void inputTime()
	    {
		cout<<"enter hours : ";
		cin>>hours;
		cout<<"enter minutes : ";
		cin>>minutes;
		cout<<"enter seconds : ";
		cin>>seconds;
  	    }
		void set()
		{
		if(seconds>=60)
		 {	minutes+=seconds/60;
			seconds=seconds%60;
		 }
		if(minutes>=60)
		 {
			hours+=minutes/60;
			minutes=minutes%60;
		 }
		}
	void sum(TIME &t3,TIME t1,TIME t2)
	{
	t3.hours=t1.hours+t2.hours;
	t3.minutes=t1.minutes+t2.minutes;
	t3.seconds=t1.seconds+t2.seconds;
	t3.set();
	}
	void show()
		{
		cout<<"total time is : ";
		cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
};
int main()
{
TIME t1(0,0,0),t2(0,0,0);
cout<<"Enter time 1 "<<endl;
t1.inputTime();
cout<<endl<<"Enter time 2 "<<endl;
t2.inputTime();
TIME t3(0,0,0);
t3.sum(t3,t1,t2);
t3.show();
}
