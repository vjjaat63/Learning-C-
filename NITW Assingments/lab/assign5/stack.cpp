#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *next;

    Node(T i)
    {
        data = i;
        next = NULL;
    }
};

template <class T>
class Stack
{
    Node<T> *top;
    int len;

public:
    Stack()
    {
        top = NULL;
        len = 0;
    }

    bool isempty()
    {
        return top == NULL;
    }

    void push(T x)
    {
        Node<T> *newNode = new Node<T>(x);
        newNode->next = top;
        top = newNode;
        len++;
        cout << "pushed " << x << endl;
    }

    T pop()
    {
        if (isempty())
        {
            cout << "Stack is empty !";
            return -1;
        }

        T value = top->data;
        Node<T> *temp = top;
        top = top->next;
        delete temp;
        len--;
        cout << "popped" << endl;
        return value;
    }

    T peek()
    {
        if (isempty())
        {
            cout << "Stack is empty!";
            return -1;
        }

        return top->data;
    }

    int size()
    {
        return len;
    }
};

int main()
{
    Stack<int> s;
    s.push(4);
    s.push(5);
    cout << "Current Size: " << s.size() << endl;
    s.pop();
    cout << "Current Size: " << s.size() << endl;
    s.push(6);
    s.push(7);
    cout << "Current Size: " << s.size() << endl;
    cout << "Top Element: " << s.peek() << endl;
    s.pop();
    s.pop();
    s.pop();
    cout << "Current Size: " << s.size() << endl;
    s.pop();
}
