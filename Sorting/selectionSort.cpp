#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll arr[100000];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //selection sort code
    for (ll i = 0; i < n - 1; i++)
    {
        ll min_indx = i; //choosing elemets from start of the array
        for (int j = i; j < n; j++)  //scanner loop
        {
            if (arr[j] < arr[min_indx])
                min_indx = j;
        }
        swap(arr[i], arr[min_indx]);
    }

    //output
    for (ll i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}