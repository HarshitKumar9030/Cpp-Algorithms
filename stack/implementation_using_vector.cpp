#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
    vector<int> v;

public:
    //push function
    void push(int data)
    {
        v.push_back(data);
    }
    //is Empty
    bool empty()
    {
        return v.size() == 0;
    }
    //pop function
    void pop()
    {
        if (!empty())
            v.pop_back();
        else
            cout << "Empty" << endl;
    }
    int top()
    {
        if (!empty())
            return v[v.size() - 1];
        else
        {
            return -1;
        }
    }
};
int main()
{
    Stack s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    //printing the element by poping each element
    cout << endl;
    cout << s.top() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
