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
bool detect_cycle(Node *head)
{
    if (head == NULL || head->next == NULL)
        return false;
    Node *slow, *fast;
    slow = head;
    fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}
void removalOfCycle(Node *&head)
{
    if (head == NULL)
        return;
    Node *slow, *fast;
    slow = head;
    fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }
    slow = head;
    Node *prev = fast;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (slow == fast)
        {
            prev->next = NULL;
        }
        prev = fast;
    }
}
int main()
{
    Node *head1 = NULL;
    cout << "Enter the Linked list data and to stop entering with '-1' : ";
    create_list(head1);
    print(head1);
    bool x = detect_cycle(head1);
    if (x)
    {
        cout << "Cycle Present" << endl;
        cout << "Press 1 to remove cycle from a linked list";
        int x;
        cin >> x;
        if (x == 1)
            removalOfCycle(head1);
        else
        {
            exit(1);
        }
    }
    else
    {
        cout << "No cycle detected" << endl;
    }

    return 0;
}