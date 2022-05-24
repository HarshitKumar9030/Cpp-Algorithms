#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int len = str.length();
    int arr[10000];
    for (int i = 0; i < len - 1; i++)
    {
        int n1, n2;
        n1 = int(str[i]);
        n2 = int(str[i + 1]);
        int d = n2 - n1;
        //cout << str[i] << d << str[i + 1];
        arr[i] = d;
    }
    for (int i = 0; i < len; i++)
    {
        if (i != len - 1)
            cout << str[i] << arr[i];
        else
            cout << str[i];
    }
}

//abcd

/*
Take as input S, a string. Write a program that inserts
between each pair of characters the difference between
their ascii codes and print the ans.

Sample Input
acb
Sample Output
a2c-1b

Explanation:
For the sample case, the Ascii code of a=97 and c=99 ,the 
difference between c and a is 2.Similarly ,the Ascii code of
b=98 and c=99 and their
difference is -1. So the ans is a2c-1b.

*/