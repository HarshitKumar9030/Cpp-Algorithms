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
    long long int res = fib(n);
    cout << res << endl;
    return 0;
}