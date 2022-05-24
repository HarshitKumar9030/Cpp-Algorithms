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
Node *kth_node(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *s = head, *f = head;
    for (int i = 0; i < k; i++)
    {
        f = head->next;
        head = head->next;
    }

    while (f != NULL)
    {
        s = s->next;
        f = f->next;
    }
    return s;
}
int main()
{
    Node *head = NULL;
    cout << "Enter the Linked list data and to stop entering with '-1' : ";
    create_list(head);
    print(head);
    cout << "enter the value of K: " << endl;
    int k;
    cin >> k;
    Node *m = kth_node(head, k);
    cout << k << "th Node of linked list: " << m->data;
    return 0;
}
//GIVEN LINKED LIST:
// 1 2 3 4 5 6 -1
// 6 --> 5 --> 4 --> 3 --> 2 --> 1 --> END
// enter the value of K:
// 2
//OUTPUT:
// 2th Node of linked list: 2

