#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= sqrt(n); i++)
        {
            for (int j = 0; j <= sqrt(n); j++)
            {
                if ((i * i) + (j * j) == n && (i <= j))
                    cout << "(" << i << "," << j << ")"
                         << " ";
            }
        }
        cout << endl;
    }

    return 0;
}