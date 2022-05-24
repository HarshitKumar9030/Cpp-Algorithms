#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.size();
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 != n && str[i] == str[i + 1])
            c++;
        else
        {
            cout << str[i] << c;
            c = 1;
        }
    }

    return 0;
}