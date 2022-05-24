#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    //pushing elements onto stack
    int n;
    cin >> n;
    //checking for empty stack
    if (s.empty())
        cout << "Stack is Empty" << endl;
    else
    {
        cout << "Stack is not empty" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    //
    if (s.empty())
        cout << "Stack is Empty" << endl;
    else
    {
        cout << "Stack is not empty" << endl;
    }
    // checking top element
    cout << "Stack top element is:" << s.top() << endl;
    //poping the elements
    while (!s.empty())
    {
        cout << s.top() << " ,";
        s.pop();
    }

    return 0;
}
