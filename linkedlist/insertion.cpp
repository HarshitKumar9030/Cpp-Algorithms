#include <bits/stdc++.h>
using namespace std;
//creating a node
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
    cout << "enter the n for number of nodes: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x = rand() % 50; //this will input the data randomly
        insertAtBeginning(head, x);
    }

    printlist(head);

    return 0;
}
