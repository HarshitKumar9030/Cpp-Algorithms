#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = n;
    int cn = n;
    int cx = x;
    int i = 0, j = 0;
    int arr[100][100];
    for (i = 0; i <= n; i++)
    {
        x -= i;
        for (j = i; j <= n; j++)
        {
            arr[i][j] = x;
            arr[i][(2 * n) - j] = x;
            arr[(2 * n) - i][j] = x;
            arr[(2 * n) - i][(2 * n) - j] = x;
            x--;
        }

        x = n;
    }
    x = cx;
    n = cn;

    for (i = 0; i < n; i++)
    {

        for (j = i; j <= (2 * n) - i; j++)
        {

            cout << arr[i][j];
            if (j != (2 * n) - i)
                cout << " ";
        }
        cout << endl;
        for (int s = 0; s <= i; s++)
            cout << "  ";
    }
    // cout << endl;
    // cout << arr[4][4];
    x = cx;
    n = cn;
    int var = n - 1;
    int y = 0;
    for (i = n; i <= (2 * n); i++)
    {
        int s = 0;
        while (s < (n - y) && i != n)
        {
            cout << "  ";
            s++;
        }
        int copy = (n - 1);

        for (j = (n - y); j <= i; j++)
        {
            cout << arr[i][j];
            if (j != i)
                cout << " ";
        }

        cout << endl;

        y++;
    }

    return 0;
}