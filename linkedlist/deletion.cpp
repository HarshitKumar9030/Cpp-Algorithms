// Deleting the node from any position from a linkedlist.

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
void CreateList(Node *&head, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *n = new Node(data);
        temp->next = n;
    }
}
void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " --> ";
        head = head->next;
    }
    cout << "END" << endl;
}
void DeleteAtHead(Node *&head)
{
    if (head == NULL)
        return;
    else
    {
        Node *temp = head->next;
        delete head;
        head = temp;
    }
    return;
}
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
void DeleteAtEnd(Node *head)
{
    int l = lengthLL(head);
    Node *temp = head;
    for (int i = 1; i < l - 1; i++)
        temp = temp->next;
    Node *d = temp->next;
    delete d;
    temp->next = NULL;
    cout << "Deleted at End" << endl;
    return;
}
void DeleteAtRandom(Node *&head, int p)
{
    if (p == 0)
        DeleteAtHead(head);
    if (p > lengthLL(head))
        DeleteAtEnd(head);
    if (p < lengthLL(head) && p != 0)
    {
        Node *temp = head;
        for (int i = 1; i < p - 1; i++)
            temp = temp->next;
        temp->next = temp->next->next;
        return;
    }
}

int main()
{
    Node *head = NULL;
    CreateList(head, 1);
    CreateList(head, 2);
    CreateList(head, 3);
    CreateList(head, 6);
    CreateList(head, 100);
    printLL(head);
    cout << "enter the position of the node >: ";
    int p;
    cin >> p;
    DeleteAtRandom(head, p);
    printLL(head);

    return 0;
}

