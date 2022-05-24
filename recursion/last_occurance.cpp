#include <bits/stdc++.h>
using namespace std;
int last_occurence(long long int *a, int n, int key)
{
    if (n == 0) //base case
        return -1;
    int i = last_occurence(a + 1, n - 1, key); //recursion case
    if (i == -1)
    {
        if (a[0] == key)
            return 0;
        else
            return -1;
    }
    else
        return i + 1;
}
int first_occurence(long long int *a, int n, int key)
{
    if (n == 0) //base case
        return -1;
    if (a[0] == key)
        return 0;

    int i = first_occurence(a + 1, n - 1, key); //rec. case

    return i + 1;
}
int main()
{
    int n;
    cin >> n;
    long long int arr[10001];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    cout << first_occurence(arr, n, key) << endl;
    cout << last_occurence(arr, n, key);
}

// Sample Input
// 7
// 86 -16 77 65 45 77 28
// 77
// Sample Output
//3
// 5
