#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        typedef long int ll;
        ll n;
        cin >> n;
        ll csum[100000];
        memset(csum, 0, sizeof(csum));
        ll arr[100000];
        int sum = 0;
        csum[0] = 1; /* frequency of 0 is always 1*/
        /*now generating the csum[]%n and keep inscreasing the frequency of the number (For better clear clear refer ipad notes)
        //along with inputs*/
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            sum = sum % n;
            sum = (sum + n) % n; //if the number is negative ans sum is got -ve then we will us this
            csum[sum]++;         // inscreasing the frequency of the occur sum
        }
        //hence frequency array is generated now we will apply nC2 formula to find
        //total number of the subarrays which has the (sum of sub array elements)%n==0
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            int m = csum[i];
            ans += (m * (m - 1)) / 2; //nC2 formula
        }
        cout << ans << endl;
    }

    return 0;
}