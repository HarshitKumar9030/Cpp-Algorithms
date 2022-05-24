#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        int l = str1.length();
        for (int i = 0; i < l; i++)
        {
            if (str1[i] == str2[i])
                cout << "0";
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }

    return 0;
}
