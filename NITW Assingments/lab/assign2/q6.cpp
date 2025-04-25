#include <iostream>
using namespace std;

int total(int n)
{
  int ans = 0, term = 0;
  while (n--)
  {
    term = term * 10 + 1;
    ans += term;
    cout << term;
    if (n)
      cout << " + ";
  }

  return ans;
}
int main()
{
  int n;
  cout << "Input nuber of terms : ";
  cin >> n;

  cout << endl
       << "The sum of series is : " << total(n) << endl;

  return 0;
}
