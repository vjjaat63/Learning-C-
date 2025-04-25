#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class Node
{
    int data;
    Node *next;

public:
    Node *head;

    Node()
    {
        head = NULL;
    }

    void Create(int x)
    {
        head = new Node();
        head->data = x;
        head->next = NULL;
    }

    void Insert(int x)
    {
        if (head == NULL)
            Create(x);
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = new Node();
            temp->next->data = x;
            temp->next->next = NULL;
        }
    }

    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data;
            temp = temp->next;
            if (temp)
                cout << " -> ";
        }
        cout << endl;
    }

    void Delete()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head = NULL;
    }

    ~Node()
    {
        Delete();
    }
};

int main()
{
    vector<int> roll;
    ifstream in;
    in.open("file.txt");

    if (!in)
    {
        std::cerr << "Unable to open file.\n";
        return 1;
    }

    char ch;
    int i = 0;
    while (in.get(ch))
    {
        if (ch >= '0' && ch <= '9')
            i = i * 10 + (ch - '0');

        else
        {
            if (i > 0 && i <= 100)
                roll.push_back(i);
            i = 0;
        }
    }

    if (i > 0 && i < 100)
        roll.push_back(i);

    in.close();

    Node list;
    for (int num : roll)
        list.Insert(num);

    cout << " Created Linked List:" << endl;
    list.Display();

    return 0;
}