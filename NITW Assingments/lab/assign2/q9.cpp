#include <iostream>
using namespace std;

string tostr(int n)
{
    if (n==0)
    {
        return "0";
    }
    
    string result = "";
    while (n > 0)
    {
        char digit = (n % 10) + '0'; 
        result = digit + result;     
        n /= 10;
    }
    return result;
}
bool isJumb(int n)
{

    string s = tostr(n);
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i - 1] - s[i] > 1 || s[i - 1] - s[i] < -1)
            return false;
    }

    return true;
}

int main()
{
    int num;
    cout << "Enter a positive interger : ";
    cin >> num;

    if (isJumb(num))
        cout << "Entered number is a Jumbled number ";
    else
        cout << "Entered number is not a Jumbled number ";
    return 0;
}