#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

string postfixToPrefix(string postfix)
{
    stack<string> s;

    for (int i = 0; i < postfix.length(); i++)
    {
        char c = postfix[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            s.push(string(1, c));
        }
        else if (isOperator(c))
        {
            string op2 = s.top();
            s.pop();
            string op1 = s.top();
            s.pop();
            string expr = c + op1 + op2;
            s.push(expr);
        }
    }

    return s.top();
}

int main()
{
    string postfix;
    cout << "Enter a postfix expression: ";
    cin >> postfix;

    string prefix = postfixToPrefix(postfix);
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
