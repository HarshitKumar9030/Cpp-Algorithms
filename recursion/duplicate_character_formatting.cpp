#include <bits/stdc++.h>
using namespace std;
string duplicate_format(string str, int s, int n)
{
    string small_ans = "";
    if (s == n)
    {
        small_ans += str[s];
        return small_ans;
    }
    if (str[s] == str[s + 1])
    {
        small_ans += str[s] + "*";
        return small_ans + duplicate_format(str, s + 1, n);
    }
    else
    {
        small_ans += str[s];
        return small_ans + duplicate_format(str, s + 1, n);
    }
}
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    cout << duplicate_format(str, 0, n - 1);
    return 0;
}

