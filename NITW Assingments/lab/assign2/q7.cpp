#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

void nonPrimeList(vector<int> &list, int n)
{
    if (n < 4)
        return;
    for (int i = 4; i <= n; i++)
    {
        if (!isPrime(i))
            list.push_back(i);
    }
}

int main()
{
    int num;
    vector<int> list;
    cout << "Input the upper limit : ";
    cin >> num;

    nonPrimeList(list, num);
    cout << "The non prime numbers are : " << endl;
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}