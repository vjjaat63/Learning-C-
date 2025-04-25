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
class queue
{
	Node<T> *front;
	Node<T> *rear;
	int len;

public:
	queue()
	{
		front = rear = NULL;
		len = 0;
	}

	bool isempty()
	{
		return front == NULL;
	}

	void push(T x)
	{
		if (isempty())
			front = rear = new Node<T>(x);
		else
		{
			rear->next = new Node<T>(x);
			rear = rear->next;
		}

		cout << "pushed" << " " << x << endl;
		len++;
	}

	T pop()
	{
		T value;
		if (isempty())
		{
			cout << "Queue is empty!" << endl;
			return -1;
		}

		Node<T> *temp = front;
		value = front->data;
		front = front->next;
		delete temp;
		len--;
		cout << "popped" << endl;
		return value;
	}

	T peak()
	{
		if (isempty())
		{
			cout << "Queue is empty!" << endl;
			return -1;
		}
		return front->data;
	}

	int size()
	{
		return len;
	}
};

int main()
{
	queue<int> q;
	q.push(4);
	q.push(5);
	cout << "Current Size : " << q.size() << endl;
	q.pop();
	cout << "Current Size : " << q.size() << endl;
	q.push(6);
	q.push(7);
	cout << "Current Size : " << q.size() << endl;
	q.pop();
	q.pop();
	q.pop();
	cout << "Current Size : " << q.size() << endl;
	q.pop();
}
