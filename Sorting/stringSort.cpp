#include <bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
    if (a.find(b) != string::npos)
    {
        return a.length() > b.length();
    }
    else
    {
        return a < b;
    }
}
int main()
{
    int n;
    cin >> n;
    string str[1000];
    for (int i = 0; i < n; i++)
        cin >> str[i];
    sort(str, str + n, cmp);
    for (int i = 0; i < n; i++)
        cout << str[i] << endl;
    return 0;
}