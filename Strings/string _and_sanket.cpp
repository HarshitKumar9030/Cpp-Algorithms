#include <bits/stdc++.h>
using namespace std;
string cstr;
string Swaping_string(string str, char s, long n, long x)
{

    for (long i = x; n != 0; i++)
    {
        if (str[i] == s)
            continue;
        else
        {
            str[i] = s;
            n--;
        }
    }
    return str;
}
long Max_len(string str, char s)
{
    //cout << "char at max fun " << str << " " << s << endl;
    long c = 0, m = 0;
    for (long i = 0; i <= str.length(); i++)
    {
        if (str[i] == s && i != str.length())
        {
            c++;
            // cout << c << endl;
        }

        else
        {
            if (c > m)
            {
                m = c;
                c = 0;
            }
        }
    }
    //cout << m << endl;
    return m;
}
int main()
{
    long n;
    cin >> n;
    string str;
    cin >> str;
    set<char> s;
    for (long i = 0; i < str.length(); i++)
        s.insert(str[i]);
    //now we will make swap and will record the maximum length of
    //consecutive characters of string
    string cstr = str;
    string qq;
    long res = 0;
    auto it = s.begin();
    while (it != s.end())
    {

        for (long i = 0; i < str.length(); i++)
        {
            str = cstr;
            string res_str = Swaping_string(str, *it, n, i);
            //cout << res_str << endl;
            long m = Max_len(res_str, *it);
            //cout << m << endl;
            if (m > res)
            {
                res = m;
                qq = res_str;
                //cout << endl
                // << res << endl;
            }
            //cout << *it << endl;
        }
        it++;
    }
    cout << res;

    return 0;
}