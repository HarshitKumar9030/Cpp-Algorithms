//sorting a linked list using merge sort
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
Node *midpoint(Node *head)
{
    Node *s = head;
    Node *f = head->next;
    if (head == NULL)
        return head;
    while (f != NULL && f->next != NULL)
    {
        s = s->next;
        f = f->next->next;
    }
    return s;
}
Node *Sort(Node *a, Node *b)
{
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    Node *newHead;
    if (a->data < b->data)
    {
        newHead = a;
        newHead->next = Sort(a->next, b);
    }
    else
    {
        newHead = b;
        newHead->next = Sort(a, b->next);
    }
    return newHead;
}
Node *MergeSort(Node *&head)
{
    //1. dividing the linkedlist into 2 lists
    Node *a = head; //First linked list
    Node *mid = midpoint(head);
    // cout << "Mid Point " << mid->data << endl;
    Node *b = mid->next; //Second linked list
    mid->next = NULL;    //broke the links between the linkedlist
    Node *c = Sort(a, b);
    return c;
}
int main()
{
    Node *head1 = NULL;
    cout << "Enter the Linked list data and to stop entering with '-1' : ";
    create_list(head1);
    print(head1);
    Node *newHead = MergeSort(head1);
    cout << "Soreted Linked list is: ";
    print(newHead);

    return 0;
}