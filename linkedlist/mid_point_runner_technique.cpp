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
    cout << "END" << endl;
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
Node *midpoint_runner(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *s = head, *f = head->next;
    while (f != NULL && f->next != NULL)
    {
        s = s->next;
        f = f->next->next;
    }
    return s;
}
int main()
{
    Node *head = NULL;
    create_list(head);
    print(head);
    Node *m = midpoint_runner(head);
    cout << "Mid point of linked list: " << m->data;
    return 0;
}

