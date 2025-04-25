#include <iostream>
using namespace std;
int gcd(int a, int b)
{
  if (b % a == 0)
    return a;
  return gcd(b % a, a);
}

int main()
{
  int n1, n2;
  cout << "Enter the two numbers " << endl;
  cout << "n1 : ";
  cin >> n1;
  cout << "n2 : ";
  cin >> n2;

  if (n1 == n2)
    cout << "Greatest common divisor of n1 and n2 is : " << n1 << endl;
  else if (n2 < n1)
    cout << "Greatest common divisor of n1 and n2 is : " << gcd(n1, n2) << endl;
  else
    cout << "Greatest common divisor of n1 and n2 is : " << gcd(n2, n1) << endl;

  return 0;
}
