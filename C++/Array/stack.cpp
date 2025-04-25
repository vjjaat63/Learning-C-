#include <iostream>
using namespace std;
int push(int stack[], int top, int size, int key);
int pop(int stack[], int top, int size, int key);
int tops(int stack[], int top, int size, int key);
void print_stack(int stack[], int top, int size, int key);
int main()
{
    int size = 20;
    int stack[size];
    int top = -1, pushed, poped, topped;
    pushed = push(stack, top, size, 4);
             print_stack(stack, top, size, 4);
      cout << "The index of top is : " << pushed << endl;
             print_stack(stack, top, size, 4);
   poped = pop(stack, top, size, 4);
      cout << "The value of top after poping is: " << poped << endl;
             print_stack(stack, top, size, 4);
    topped = tops(stack, top, size, 4);
      cout << "The value of top element is : " << topped << endl;
              print_stack(stack, top, size, 4);

}
int push(int stack[], int top, int size, int key)
{
    top++;
    if (top > size - 1)
    {
        cout << "stack overflow"<<endl;
        return -1;
    }
    else
        stack[top] = key;
    return top;
}
int pop(int stack[], int top, int size, int key)
{
    if (top < 0)
    {
        cout << "stack underflow "<<endl;
        return -1;
    }
    else
        return stack[top--];
}
int tops(int stack[], int top, int size, int key)
{
    if (top < 0)
    {
        cout << "stack underflow"<<endl;
        return -1;
    }
    else
        return stack[top];
}
void print_stack(int stack[], int top, int size, int key)
{
    cout << "Your stack is :" << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}
