#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
ll merge(ll arr[], ll s, ll e, ll n)
{
    ll temp[n];
    ll mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;
    ll cnt = 0;
    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            cnt += mid - i + 1; //main logic : this will calculate the cross inversion
        }
    }

    //remaining part
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    //copying the temp to original array
    for (int i = s; i <= e; i++)
        arr[i] = temp[i];

    return cnt;
}
ll inversion_count(ll arr[], ll s, ll e, ll n)
{
    if (s >= e)
        return 0;

    ll mid = (s + e) / 2;
    ll x = inversion_count(arr, s, mid, n);
    ll y = inversion_count(arr, mid + 1, e, n);
    ll z = merge(arr, s, e, n);

    return (x + y + z);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll result = inversion_count(arr, 0, n - 1, n);
        cout << result << endl;
    }

    return 0;
}
