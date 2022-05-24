#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

    /*
    sieve for prime number
    */
    bool arr[1000000] = {0};
    for (unsigned long i = 3; i <= 1000000; i += 2)
        arr[i] = 1;
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    for (unsigned long i = 3; i <= 1000000; i += 2)
    {
        if (arr[i] == 1)
        {
            for (unsigned long j = i * i; j <= 1000000; j += i)
            {
                arr[j] = 0;
            }
        }
    }

    int div[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int div_size = sizeof(div) / sizeof(div[0]);
    int n;
    cin >> n;
    string str;
    cin >> str;
    int c1 = 0, c2 = 0;
    //for single
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < div_size; j++)
        {
            if ((str[i] - '0') % div[j] == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0 && str[i] != '0' && str[i] != '1')
        {
            c1++;
            cout << "1 " << str[i] << " ";
            flag = 0;
            str[i] = '@';
        }
    }
    cout << endl;
    //for 2 digits
    flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '@' && str[i + 1] != '@' && i + 1 != n)
        {
            int num = ((str[i] - '0') * 10) + (str[i + 1] - '0');
            // cout << num << " ";
            for (int j = 0; j < div_size; j++)
            {
                if (num % div[j] == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                c2++;
                cout << "2 " << num << " ";

                str[i] = '@';
                str[i + 1] = '@';
                i = i + 2;
                flag = 0;
            }
        }
    }
    flag = 0;
    cout << endl;
    //for 3 digits
    int c3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '@' && str[i + 1] != '@' && str[i + 2] != '@' && i + 2 <= n)
        {
            int num = ((str[i] - '0') * 100) + ((str[i + 1] - '0') * 10) + (str[i + 2] - '0');
            // cout << num << " ";
            for (int j = 0; j < div_size; j++)
            {
                if (num % div[j] == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                c3++;
                cout << "3 " << num << " ";
                str[i] = str[i + 1] = str[i + 2] = '@';
                i = i + 3;
                flag = 0;
            }
        }
    }
    cout << endl;
    flag = 0;
    int c4 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] != '@' && str[i + 1] != '@' && str[i + 2] != '@' && str[i + 3] != '@' && i + 3 <= n)
        {
            int num = ((str[i] - '0') * 1000) + ((str[i + 1] - '0') * 100) + ((str[i + 2] - '0') * 10) + (str[i + 3] - '0');
            // cout << num << " ";
            for (int j = 0; j < div_size; j++)
            {
                if (num % div[j] == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                c4++;
                cout << "4 " << num << " ";

                str[i] = str[i + 1] = str[i + 2] = str[i + 3] = '@';
                i = i + 4;
                flag = 0;
            }
        }
    }
    cout << endl
         << str << endl;

    cout << c1 + c2 + c3 + c4 << endl;

    return 0;
}