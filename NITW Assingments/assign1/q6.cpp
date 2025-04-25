#include <iostream>
using namespace std;
int main()
{
    int P, R, T;
    cout << "Enter principle amount : ";
    cin >> P;
    cout << "Enter rate of interest : ";
    cin >> R;
    cout << "Enter time (in years):  ";
    cin >> T;

    cout << "Simple Interest is  : " << (P * R * T) / 100 << endl;
    return 0;
}
