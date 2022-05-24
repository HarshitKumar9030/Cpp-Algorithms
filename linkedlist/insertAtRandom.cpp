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
int lengthLL(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void InsertAtEnd(Node *&head, int data)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node(data);
    return;
}
void InsertAtP(Node *&head, int data, int p)
{
    int jump = 1;
    Node *temp = head;
    while (jump <= p - 1)
    {
        temp = temp->next;
        jump++;
    }
    Node *n = new Node(data);
    n->next = temp->next;
    temp->next = n;
    return;
}
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
    return;
}
void InsertAtRandom(Node *&head, int data, int p)
{
    if (head == NULL || p == 0)
    {
        insertAtBeginning(head, data);
        return;
    }
    if (p > lengthLL(head))
    {
        InsertAtEnd(head, data);
        return;
    }
    if (p < lengthLL(head) && p != 0)
    {
        InsertAtP(head, data, p);
        return;
    }
    return;
}
void printlist(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << "END" << endl;
}
int main()
{
    Node *head = NULL;
    InsertAtRandom(head, 1, 0);
    InsertAtRandom(head, 2, 0);
    InsertAtRandom(head, 3, 0);
    InsertAtRandom(head, 4, 0);
    InsertAtRandom(head, 5, 0);
    printlist(head);
    InsertAtRandom(head, 100, 2);
    printlist(head);
    return 0;
}

