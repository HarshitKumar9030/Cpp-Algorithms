#include <bits/stdc++.h>
using namespace std;
void transfer(stack<int> &s1, stack<int> &s2, int n)
{
    for (int i = 0; i < n; i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}
int main()
{
    stack<int> s1, s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        //storing the top element from s1 to temp variable
        int x = s1.top();
        s1.pop();

        //transfering the s1 to s2 stack
        transfer(s1, s2, n - i - 1);

        //pushing x to s1 stack
        s1.push(x);

        //transfering the s2 to s1 stack
        transfer(s2, s1, n - i - 1);
    }
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
}
