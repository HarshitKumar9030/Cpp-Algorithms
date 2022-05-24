#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string str;
    cin >> str;
    int ans = 0;
    int count[] = {0, 0};
    int l = 0;
    for (int r = 0; r < str.length(); r++)
    {
        char a = str[r];
        count[a - 'a']++;
        if (min(count[0], count[1]) > k)
        {
            count[str[l] - 'a']--;
            l++;
        }
        else
            ans++;
    }
    cout << ans;
    return 0;
}

