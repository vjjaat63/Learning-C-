#include <iostream>
#include <iomanip> // For fixed and setprecision
using namespace std;

int main()
{
  float brand, travel, food, logic;

  cout << "Enter branding expenses: Rs.";
  cin >> brand;
  cout << "Enter travel expenses: Rs.";
  cin >> travel;
  cout << "Enter food expenses: Rs.";
  cin >> food;
  cout << "Enter logistics expenses: Rs.";
  cin >> logic;

  float total = brand + travel + food + logic;

  cout << fixed << setprecision(2); // Set decimal precision to 2 for all outputs
  cout << endl << "Total expenses: Rs." << total << endl;

  cout << "Branding expenses percentage: " << (brand / total) * 100 << "%" << endl;
  cout << "Travel expenses percentage: " << (travel / total) * 100 << "%" << endl;
  cout << "Food expenses percentage: " << (food / total) * 100 << "%" << endl;
  cout << "Logistics expenses percentage: " << (logic / total) * 100 << "%" << endl;

  return 0;
}
