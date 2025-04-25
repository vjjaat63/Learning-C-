#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;
  cout << "Enter a positive integer : ";
  cin >> n;
  for (int i = 1; i <= n / 2; i++)
  {
    if (n % i == 0)
      sum += i;
  }

  if (sum == n)
    cout << "Entered number is a perfect number " << endl;
  else
    cout << "Entered number is not a perfect number " << endl;

  return 0;
}
