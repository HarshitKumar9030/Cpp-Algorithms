#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100000];
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    //insertion sort
    for (int i = 1; i < n; i++)
    {
        int e = arr[i];
        int j = i - 1;
        while (j >= 0 && e < arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = e;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}