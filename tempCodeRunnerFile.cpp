#include <iostream>
using namespace std;
struct Node
{
    int size = 0;
    string st = "";
    double val = 0;
    Node(string str, double data)
    {
        st = str;
        val = data;
    }
    Node *next = nullptr;
};

void insert_front(Node *&h, string str, double val)
{
    // h=new Node();
    Node *curr = h;
    Node *new_node = new Node(str, val);
    new_node->next = curr;
    curr = new_node;
}

void insert_back(Node *&h, string str, double data)
{
    // size of the node object passed as an arg
    h->size += 1;

    // new node object
    Node *new_node = new Node(str, data);

    // node obj tht passed is assigned with a new node
    if (h == nullptr)
    {
        h = new_node;
    }
    else
    {
        Node *current = h;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = new_node;
    }
}

void insert_at_even_pos(Node *&h, string str_d, double val_d)
{
    int c = 0;
    Node *new_node_d = new Node(str_d, val_d);
    Node *curr = h;
    while (curr->next != nullptr)
    {
        // c=Count(h);
        if (c % 2 != 0)
        {
            new_node_d->next = curr->next;
            curr->next = new_node_d;
            c++;
        }
        c++;
        curr = curr->next;
    }
}

void remove_back(Node *&h)
{
    int i = 0;
    Node *curr = h;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = nullptr;
}

void print(Node *&h)
{
    Node *curr = h;
    while (curr != nullptr)
    {
        cout << curr->st << "<-->" << h->val << endl;
        curr = curr->next;
    }
}

int Count(Node *&h)
{
    Node *curr = h;
    int c = 0;
    while (curr != nullptr)
    {
        c++;
        curr = curr->next;
    }
    return c;
}

void reverse_linkedlist()
{
}

int main()
{
    cout << "This is the beginning of the CS Major salary linked list" << endl;
    Node 
}