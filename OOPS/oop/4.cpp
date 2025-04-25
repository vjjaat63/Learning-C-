#include <iostream>
using namespace std;
class demo
{
public:
int num;
 demo(int n)
 {
  int ans = 1;
  for(int i=1;i<=n;i++)
   ans*=i;
  cout<<"Factorial of "<<n<<" is : "<<ans<<endl;
  }
};
int main()
{
int n;
cout << "Enter any number : ";
cin >>n;
demo d1(n);
return 0;
}
