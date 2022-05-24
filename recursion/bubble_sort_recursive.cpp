#include <bits/stdc++.h>
using namespace std;
void bubble_sort(long int *a, int j, int n)
{
    if (n == 1)
        return;
    if (j == n - 1)
    {
        return bubble_sort(a, 0, n - 1);
    }
    if (a[j] > a[j + 1])
        swap(a[j + 1], a[j]);
    return bubble_sort(a, j + 1, n);
}
int main()
{
    int n;
    cin >> n;
    long int arr[100000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bubble_sort(arr, 0, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}

