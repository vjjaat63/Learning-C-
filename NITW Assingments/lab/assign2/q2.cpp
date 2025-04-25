#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the total numbers of the fibonacci series you want to display : ";
  cin >> n;
  int a = 0, b = 1;
  cout << "Required List : ";
  while (n--)
  {
    cout << a;
    if (n != 0)
      cout << ",";
    int temp;
    temp = a;
    a = b;
    b = b + temp;
  }
  cout << endl;
  return 0;
}
