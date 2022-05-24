#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    sort(arr, arr + n);
    int t = 0;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            if ((arr[i] + arr[l] + arr[r]) == target)
            {
                cout << arr[i] << ", " << arr[l] << " and " << arr[r] << endl;
                l++;
                r--;
            }
            else if ((arr[i] + arr[l] + arr[r]) > target)
                r--;
            else
                l++;
        }
    }

    return 0;
}
/*
9
5 7 9 1 2 4 6 8 3
10

1 2 3 4 5 6 7 8 9

*/