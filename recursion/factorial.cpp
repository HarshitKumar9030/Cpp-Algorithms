#include <bits/stdc++.h>
using namespace std;
//function -recursion
int fact(int n)
{
    if (n == 0)
        return  1;
    int small_ans = fact(n - 1);
    return n * small_ans;
}
int main()
{
    
    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}