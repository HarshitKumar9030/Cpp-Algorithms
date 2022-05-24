#include <bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int data = s.top();
    s.pop();
    insert_at_bottom(s, x);
    s.push(data);
}
void reverse_stack(stack<int> &s)
{
    //base case
    if (s.empty())
        return;
    //pop out top element
    int x = s.top();
    s.pop();
    reverse_stack(s);
    insert_at_bottom(s, x);
}
int main()
{
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    reverse_stack(s1);
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
}
