#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int arr[1000];
    int x = 0;
    for (int i = a; i <= b; i++)
    {
        arr[x++] = i;
    }
    int res = 0, max = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            res = arr[i] ^ arr[j];
            //cout << arr[i] << " " << arr[j] << " " << res << endl;
            if (res > max)
            {
                max = res;
            }
        }
    }
   // cout << endl;
    cout << max;

    return 0;
}