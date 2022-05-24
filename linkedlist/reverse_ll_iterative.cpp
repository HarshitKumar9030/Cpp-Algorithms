#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
//inserting at beginningof the linkedlist
void insertAtBeginning(Node *&head, int d)
{
    if (head == NULL)
    {
        head = new Node(d);
        return;
    }
    else
    {
        Node *n = new Node(d);
        n->next = head;
        head = n;
    }
}
void create_list(Node *&head)
{
    int x;
    cin >> x;
    while (x != -1)
    {
        insertAtBeginning(head, x);
        cin >> x;
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
void reverse_list(Node *&head)
{
    Node *prev, *n, *current;
    prev = NULL;
    current = head;
    while (current != NULL)
    {
        n = current->next;
        current->next = prev;
        prev = current;
        current = n;
    }
    head = prev;
    return;
}
int main()
{
    Node *head = NULL;
    create_list(head);
    print(head);
    reverse_list(head);
    print(head);
    return 0;
}
