#include <iostream>
using namespace std;

bool palindrome(string s, int start, int end) // using 2 pointers
{
    if (start >= end)
        return true;

    if (s[start] == s[end])
        return palindrome(s, start + 1, end - 1);
    else
        return false;
}

int main()
{
    string s;
    cout << "Enter a string : ";
    cin >> s;

    palindrome(s, 0, s.size() - 1) ? cout << "Entered string is a palindrome ." : cout << "Entered string is not a palindrome .";
    return 0;
}