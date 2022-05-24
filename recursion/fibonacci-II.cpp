//this will Print all fibonnaci numbers less than equal to N.

#include <bits/stdc++.h>
using namespace std;
long long int fib(int n)
{

    if (n <= 1)
    {

        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        long long int res = fib(i);
        if (res >= n)
            break;
        cout << res << endl;
    }

    return 0;
}