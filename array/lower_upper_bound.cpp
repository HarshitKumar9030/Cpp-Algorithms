#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;

    while (q)
    {
        int x;
        cin >> x;
        if (count(v.begin(), v.end(), x) > 0)
        {
            auto lb = lower_bound(v.begin(), v.end(), x);
            auto ub = upper_bound(v.begin(), v.end(), x);
            //cout << endl;
            cout << (lb - v.begin()) << " " << (ub - v.begin()) - 1 << endl;
        }
        else
            cout << "-1"
                 << " "
                 << "-1" << endl;

        q--;
    }

    return 0;
}