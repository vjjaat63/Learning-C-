#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

string prefixToPostfix(string prefix)
{
    stack<string> s;

    for (int i = prefix.length() - 1; i >= 0; i--)
    {
        char c = prefix[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            s.push(string(1, c));
        }
        else if (isOperator(c))
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            string expr = op1 + op2 + c;
            s.push(expr);
        }
    }

    return s.top();
}

int main()
{
    string prefix;
    cout << "Enter a prefix expression: ";
    cin >> prefix;

    string postfix = prefixToPostfix(prefix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}