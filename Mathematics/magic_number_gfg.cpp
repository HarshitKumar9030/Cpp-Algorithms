#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef vector<int> int_vector;

ll gcd(ull a, ull b)
{
    if (a == 0)
        return (b % MOD);
    else
        return gcd((b % a) % MOD, a % MOD);
}
ull mul(ull a, ull b)
{
    return (a * b) % MOD;
}
ull power(ull a, ull n)
{
    if (n == 0)
        return 1;
    ull ans = power(a, n / 2);
    if (n % 2)
        return mul(mul(ans, ans), a);
    return mul(ans, ans);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ull arr[100];
        ull prod = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            //use ( a * b) % c = ( ( a % c ) * ( b % c ) ) % c
            prod = ((arr[i] % MOD) * (prod % MOD)) % MOD;
            // prod %= MOD;
        }
        ull g = arr[0];
        for (int i = 1; i < n; i++)
        {
            g = (gcd(g, arr[i]) % MOD);
        }
        ull res = power(prod, g);
        res = res % MOD;
        cout << res << endl;
    }
    return 0;
}

/*
Given two function, one is h(x) which includes the products of all the number in an array A[ ]
having size N and another function f(x) which denotes the GCD of all the numbers in an array.
Your task is to find the value of  h(x)^f(x).

Note: Since the answer can be very large, use modulo 10^9+7.

Output:
Print the required answer in a new line

Constraints:
1 <= T <= 26
1 <= N <= 60
1 <= Ai <= 104

Example:
Input:              
1                  
2
2 4
Output:
64

Explanation:
Testcase1:Product of the array elements is 8 and GCD of the elements is 2. So 82=64.
*/
