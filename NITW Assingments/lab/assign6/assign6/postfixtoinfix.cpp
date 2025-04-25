#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

bool isOperand(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

string postfixtoinfix(string postfix) {
    stack<string> s;
    
    for (int i = 0; i < postfix.length(); i++) {
        char c = postfix[i];

        if (isOperand(c)) {
            s.push(string(1, c));
        } else if (isOperator(c)) {
            string operand2 = s.top();
            s.pop();
            string operand1 = s.top();
            s.pop();
            string temp = "(" + operand1 + string(1, c) + operand2 + ")";
            s.push(temp);
        }
    }

    return s.top();
}

int main() {
    string postfix;
    cout << "Enter a postfix expression: ";
    cin >> postfix;

    string infix = postfixtoinfix(postfix);
    cout << "Infix expression: " << infix << endl;

    return 0;
}

