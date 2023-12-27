#include <iostream>
using namespace std;
const int size = 5;
struct Graph
{
    // int vertices;
    int count = 0;
    string val = "";
    Graph *root = nullptr;
    Graph *left = nullptr;
    Graph *right = nullptr;
};

// struct LL{

// };

void add_staff(string arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "Please, enter the staff name: [" << i << "]: ";
        cin >> arr[i];
    }
}

void replace_staff(string arr[], string found)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == found)
        {
            arr[i] = "---";
        }
    }
}

void print_list(string arr[])
{
    for (int i; i < size; i++)
    {
        cout << arr[i] << "<-->";
    }
}

int main()
{

    string *arr1 = new string[size];
    string *arr2 = new string[size];
    cout << "Enter the staff collection1:" << endl;
    add_staff(arr1);
    // cout << "Enter the staff collection2:" << endl;
    // add_staff(arr2);
    cout << "Now, time to replace the staff: " << endl;
    // replace_staff(arr1, "ligma");
    print_list();

    return 0;
}