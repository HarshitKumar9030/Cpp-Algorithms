#include <bits/stdc++.h>
using namespace std;
void prime_factors(int n){
    vector<pair<int,int>>p;
    for(int i=2;i*i<=n;i++){
        int cnt=0;
        while(n%i==0){
            cnt++;
            n=n/i;
        }
        p.push_back(make_pair(i,cnt));
    }
    if(n!=1)
    p.push_back(make_pair(n,1));
    
    for(auto x:p){
        cout<<x.first<<"^"<<x.second<<endl;
    }
}
int main() {
	int n;
	cin>>n;
	prime_factors(n);
	return 0;
}


/*
Input:
    132
Output:
    2^2
    3^1
    11^1
*/
