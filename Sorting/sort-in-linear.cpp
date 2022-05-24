#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        if (x == 0)
            a++;
        if (x == 1)
            b++;
        if (x == 2)
            c++;
    }
    for (int i = 0; i < a; i++)
        cout << "0"
             << " ";
    for (int j = 0; j < b; j++)
        cout << "1"
             << " ";
    for (int k = 0; k < c; k++)
        cout << "2"
             << " ";
}