#include <iostream>
using namespace std;

int reverse(int n)
{
  int ans = 0, m;
  while (n != 0)
  {
    m = n % 10;
    ans = ans * 10 + m;
    n = n / 10;
  }

  return ans;
}

int main()
{
  int num;
  cout << "Enter any positive integer : ";
  cin >> num;
  int rev = reverse(num);

  if (num == rev)
    cout << "Entered number is a palindrome ." << endl;
  else
    cout << "Entered number is not a palindrome ." << endl;

  return 0;
}
