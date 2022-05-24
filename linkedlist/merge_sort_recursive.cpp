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
Node *MergeSort(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    //craeting a new head pointer
    Node *head3;
    if (head1->data < head2->data)
    {
        head3 = head1;
        head3->next = MergeSort(head1->next, head2);
    }
    else
    {
        head3 = head2;
        head3->next = MergeSort(head1, head2->next);
    }

    return head3;
}
int main()
{
    Node *head1 = NULL, *head2 = NULL;
    cout << "Enter the 1st sorted Linked list data and to stop entering with '-1' : ";
    create_list(head1);
    cout << "Enter the 2nd sorted Linked list data and to stop entering with '-1' : ";
    create_list(head2);
    print(head1);
    print(head2);
    Node *newHead = MergeSort(head1, head2);
    cout << "Soreted Linked list is: ";
    print(newHead);

    return 0;
}

// Enter the 1st sorted Linked list data and to stop entering with '-1' : 7 5 3 1 -1
// Enter the 2nd sorted Linked list data and to stop entering with '-1' : 8 6 4 2 -1
// 1 --> 3 --> 5 --> 7 --> END
// 2 --> 4 --> 6 --> 8 --> END
// Soreted Linked list is: 1 --> 2 --> 3 --> 4 --> 5 --> 6 --> 7 --> 8 --> END
