#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int x = 0)
    {
        data = x;
        prev = next = NULL;
    }
};

class List
{
public:
    Node *head;

    List()
    {
        head = NULL;
    }

    void insert(int x)
    {
        Node *temp = new Node(x);

        if (head == NULL)
        {
            head = temp;
            return;
        }

        Node *curr = head;

        if (curr->data >= x)
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
            return;
        }

        while (curr->next && curr->next->data < x)
        {
            curr = curr->next;
        }

        if (curr->next == NULL)
        {
            curr->next = temp;
            temp->prev = curr;
            return;
        }

        temp->next = curr->next;
        if (curr->next != NULL)
        {
            curr->next->prev = temp;
        }
        curr->next = temp;
        temp->prev = curr;
    }

    void deleteList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *curr = temp;
            temp = temp->next;
            delete curr;
        }
        head = NULL;
    }

    void show()
    {
        Node *curr = head;
        while (curr)
        {
            cout << curr->data;
            curr = curr->next;
            if (curr)
                cout << "<->";
        }
        cout << endl;
    }
};

int main()
{
    List dl;

    cout << "Enter values to insert in list (Press -1 to exit): ";
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        else
            dl.insert(x);
    }

    cout << "The created double linked list is: ";
    dl.show();

    dl.deleteList();

    return 0;
}
