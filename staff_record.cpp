#include <iostream>
using namespace std;

const int size = 5;

struct Graph
{
    string val;
    Graph *left;
    Graph *right;

    Graph(const string &value) : val(value), left(nullptr), right(nullptr) {}
};

void add_staff(string arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "Please, enter the staff name [" << i << "]: ";
        cin >> arr[i];
    }
}

void print_list(string arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "<-->";
    }
    cout << endl;
}

void insertIntoBST(Graph *&root, const string &value)
{
    if (root == nullptr)
    {
        root = new Graph(value);
    }
    else
    {
        if (value < root->val)
        {
            insertIntoBST(root->left, value);
        }
        else
        {
            insertIntoBST(root->right, value);
        }
    }
}

void printBST(Graph *&root)
{
    Graph *curr = root;
    printBST(curr->left);
    cout << curr->val << "--";
    printBST(curr->right);
}

int main()
{
    string arr1[size];

    cout << "Enter the staff collection:" << endl;
    add_staff(arr1);

    cout << "Staff names: ";
    print_list(arr1);

    Graph *g = nullptr;

    for (int i = 0; i < size; i++)
    {
        insertIntoBST(g, arr1[i]);
    }

    // Now, you have a BST constructed from the names in arr1

    return 0;
}
