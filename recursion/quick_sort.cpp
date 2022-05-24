#include <bits/stdc++.h>
using namespace std;
int partion(int *a, int s, int e)
{
    int i = s - 1; //left part
    int j = s;
    int p = a[e]; //pivot
    for (; j <= e-1;)   //e-1 bcz we have taken a[e] as pivot 
    {
        if (a[j] <= p)
        {
            i += 1;
            swap(a[i], a[j]);
        }
        j += 1;
    }
    swap(a[e], a[i + 1]);
    return i + 1;
}
void quicksort(int *a, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partion(a, s, e);
    quicksort(a, s, p - 1);
    quicksort(a, p + 1, e);
}
int main()
{
    int n;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

