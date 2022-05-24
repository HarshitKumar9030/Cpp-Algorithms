#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
void create_list(Node *&head, int d)
{
    if (head == NULL)
    {
        head = new Node(d);
        //head = n;
    }
    else
    {
        Node *n = new Node(d);
        n->next = head;
        head = n;
    }
    return;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << endl;
}
bool searching_recursive(Node *head, int key)
{
    if (head == NULL)
        return false;
    if (head->data == key)
        return true;
    return searching_recursive(head->next, key);
}
int main()
{
    Node *head = NULL;
    create_list(head, 1);
    create_list(head, 2);
    create_list(head, 3);
    create_list(head, 4);
    print(head);
    cout << "Enter key to search in the list: >";
    int key;
    cin >> key;
    if (searching_recursive(head, key))
        cout << "Element Found!" << endl;
    else
        cout << "Element Not Found!" << endl;

    return 0;
}

