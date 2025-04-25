#include <iostream>
#include <stack>
#include <algorithm> // For reverse function
using namespace std;

// Check if character is an operator
bool isOperator(char c){
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Get precedence of operators
int precedence(char c){
    if (c == '+' || c == '-') return 1;
    if (c == '*' || c == '/') return 2;
    if (c == '^')  return 3;
    return -1;
}

// Check if character is an operand (alphanumeric character)
bool isOperand(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

// Function to reverse the string
string reverseString(string str){
    reverse(str.begin(), str.end());
    return str;
}

// Infix to Postfix conversion
string infixToPostfix(string infix){
    stack<char> s;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++){
        char c = infix[i];

        if (isOperand(c)){
            postfix += c;
        }
        else if (c == '('){
            s.push(c);
        }
        else if (c == ')'){
            while (!s.empty() && s.top() != '('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
        else if (isOperator(c)){
            while (!s.empty() && precedence(s.top()) >= precedence(c)){
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()){
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

// Infix to Prefix conversion
string infixToPrefix(string infix)
{
    // Step 1: Reverse the infix expression
    infix = reverseString(infix);

    // Step 2: Replace '(' with ')' and ')' with '('
    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] == '(') infix[i] = ')';
        else if (infix[i] == ')') infix[i] = '(';
    }

    // Step 3: Convert the reversed infix to postfix
    string postfix = infixToPostfix(infix);

    // Step 4: Reverse the postfix expression to get prefix
    string prefix = reverseString(postfix);

    return prefix;
}

int main()
{
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
