#include <iostream>
using namespace std;

struct Node
{
    int size = 0;
    string st = "Node";
    double val = 0;
    Node *next = nullptr;

    Node(string str, double data) : st(str), val(data) {}
};

void insert_front(Node *&h, string str, double val)
{
    Node *new_node = new Node(str, val);
    new_node->next = h;
    h = new_node;
}

void insert_back(Node *&h, string str, double data)
{
    h->size += 1;

    Node *new_node = new Node(str, data);

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

void insert_between_nodes(Node *&h, double val_between)
{
    Node *curr = h;

    while (curr != nullptr && curr->next != nullptr)
    {
        Node *new_node_between = new Node("extra_node", val_between);
        new_node_between->next = curr->next;
        curr->next = new_node_between;
        curr = new_node_between->next;
    }
}

void remove_back(Node *&h)
{
    if (h == nullptr)
    {
        return;
    }

    if (h->next == nullptr)
    {
        delete h;
        h = nullptr;
    }
    else
    {
        Node *curr = h;
        Node *prev = nullptr;
        while (curr->next != nullptr)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;
        delete curr;
    }
}

void print(Node *h)
{
    Node *curr = h;
    while (curr != nullptr)
    {
        // if (curr->st == "")
        // {
        //     cout << "Node"<< "<-->" << curr->val << endl;
        // }
        // else
        // {
        cout << curr->st << "<-->" << curr->val << endl;
        // }
        curr = curr->next;
    }
}

int Count(Node *h)
{
    int c = 0;
    Node *curr = h;
    while (curr != nullptr)
    {
        c++;
        curr = curr->next;
    }
    return c;
}

// Function to reverse the linked list (not implemented in the provided code)

int main()
{
    cout << "This is the beginning of the CS Major salary linked list" << endl;
    Node *head = nullptr;

    // Sample usage
    insert_front(head, "Node1", 1000);
    insert_back(head, "Node2", 2000);
    insert_back(head, "Node3", 3000);
    insert_back(head, "Node4", 4000);

    cout << "Original Linked List:" << endl;
    print(head);

    insert_between_nodes(head, 2500);

    cout << "\nLinked List after inserting at even positions:" << endl;
    print(head);

    remove_back(head);
    cout << "\nLinked List after removing last element:" << endl;
    print(head);

    cout << "\nNumber of elements in the linked list: " << Count(head) << endl;

    // Reverse the linked list - Implement this function

    return 0;
}
