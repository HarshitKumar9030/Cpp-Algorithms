#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int s = 0;
        for (int i = a; i <= b; i++)
        {
            s += __builtin_popcount(i);
        }
        cout << s << endl;
    }

    return 0;
}