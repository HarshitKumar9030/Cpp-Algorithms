#include <bits/stdc++.h>
using namespace std;
int str_to_int(string str, int n)
{
    if (n == 0)
        return 0;

    int num = str[n-1] - '0';
    int ans = str_to_int(str, n-1);
    return (ans * 10 + num);
}
int main()
{
    string str;
    cin >> str;
    int n = str.length();
    cout << str_to_int(str, n );
    return 0;
}


