#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[100][100];
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (long long i = n - 1; i >= 0; i--)
    {
        for (long long j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}