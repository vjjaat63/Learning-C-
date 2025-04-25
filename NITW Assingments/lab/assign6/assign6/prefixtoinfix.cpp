#include <iostream>
#include <stack>
#include <algorithm> // For reverse function
using namespace std;

// Check if the character is an operator
bool isOperator(char c){
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Check if the character is an operand (alphanumeric character)
bool isOperand(char c){
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

// Reverse the string
string reverseString(string str){
    reverse(str.begin(), str.end());
    return str;
}

// Postfix to Infix conversion
string postfixToInfix(string postfix){
    stack<string> s;

    for (int i = 0; i < postfix.length(); i++){
        char c = postfix[i];

        // If the character is an operand, push it onto the stack
        if (isOperand(c)){
            s.push(string(1, c));
        }
        // If the character is an operator, pop two operands from the stack
        else if (isOperator(c)){
            string operand2 = s.top();
            s.pop();
            string operand1 = s.top();
            s.pop();

            // Create a new infix expression by placing the operator between the operands
            string temp = "(" + operand1 + string(1, c) + operand2 + ")";
            s.push(temp);
        }
    }

    // The final expression on the stack is the result
    return s.top();
}

// Prefix to Infix conversion using Postfix logic
string prefixToInfix(string prefix){
    // Step 1: Reverse the prefix expression
    prefix = reverseString(prefix);

    // Step 2: Convert the reversed expression to infix (which is similar to postfix to infix conversion)
    return postfixToInfix(prefix);
}

int main()
{
    string prefix;
    cout << "Enter a prefix expression: ";
    cin >> prefix;

    string infix = prefixToInfix(prefix);
    cout << "Infix expression: " << infix << endl;

    return 0;
}
