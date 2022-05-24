#include <bits/stdc++.h>
using namespace std;
bool isSorted(long long int *a, int n)
{
    if (n == 1)
        return true;
    if (a[0] <= a[1] and isSorted(a + 1, n - 1))
    {
        return true;
    }

    return false;
}
int main()
{
    int n;
    cin >> n;
    long long int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (isSorted(arr, n))
        cout << "true";
    else
        cout << "false";
    return 0;
}