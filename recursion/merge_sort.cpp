#include <bits/stdc++.h>
using namespace std;
void final_merge(int *a, int s, int e)
{
    int mid = (s + e) / 2;
    int temp[100];
    int i = s;
    int j = mid + 1;
    int k = s;
    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
    {
        temp[k++] = a[i++];
    }

    while (j <= e)
    {
        temp[k++] = a[j++];
    }

    //copying to original array
    for (int i = s; i <= e; i++)
        a[i] = temp[i];
}
void merge_sort(int *a, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;
    merge_sort(a, s, mid);
    merge_sort(a, mid + 1, e);

    final_merge(a, s, e);
}
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
