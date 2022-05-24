/*
Sample Input
1000000000

Sample Output
31622
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int lld;
lld root(lld n){
	lld s=0;
	lld e=n;
	lld ans=-1;
	while(s<=e)
	{
		lld mid=(s+e)/2;
		if(mid*mid==n)
			return mid;		
		else if(mid*mid<n){
			ans=mid;
			s=mid+1;
		}
		else
			e=mid-1;
	}
	return ans;

}
int main() {
	lld n;
	cin>>n;
	cout<<root(n)<<endl;
	return 0;
}
