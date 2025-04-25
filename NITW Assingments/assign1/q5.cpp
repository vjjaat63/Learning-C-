#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float marks[6];
    float agg = 0, per;

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter marks for subject " << i + 1 << " : ";
        cin >> marks[i];
        agg += marks[i];
    }

    cout << endl;
    cout << "Aggregate marks of the student is : " << agg << " out of 600." << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage : " << (agg / 600) * 100 << "%" << endl;

    return 0;
}
