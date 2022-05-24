#include <bits/stdc++.h>
#define MAX 1000000
typedef unsigned long ll;
using namespace std;
void sieve_prime(bool *arr, ll n)
{
	//first marking all odd as prime number
	for (ll i = 3; i <= MAX; i += 2)
		arr[i] = 1;

	//applying sieve
	for (ll i = 3; i <= MAX; i += 2)
	{
		if (arr[i] == 1)
		{
			for (ll j = i * i; j <= MAX; j += i)
			{
				arr[j] = 0;
			}
		}
	}
	//special case
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 1;

	int res = 0, i = 0;
	while (n > 0)
	{
		if (arr[i] == 1)
		{
			res = i;
			//cout<<i<<" ";
			n--;
		}
		i++;
	}
	cout << res << endl;
}
int main()
{
	ll n;
	cin >> n;
	bool arr[MAX] = {0};
	sieve_prime(arr, n);

	return 0;
}

/*
Input:
  5
Output:
  11     //It's a 5th prime Number
*/
