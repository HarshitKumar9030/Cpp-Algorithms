#include<bits/stdc++.h>
#define MAX 1000000
typedef unsigned long ll;
using namespace std;
void sieve_prime(int *arr){
	//first marking all odd as prime number
	for(ll i=3;i<=MAX;i+=2)
	   arr[i]=1;
 
	//applying sieve
	for(ll i=3;i<=MAX;i+=2){
		if(arr[i]==1){
			for(ll j=i*i;j<=MAX;j+=i){
				arr[j]=0;
			}
		}
	}
	//special case
	arr[0]=0;
	arr[1]=0;
	arr[2]=1;
 
}
int main(){
    int arr[MAX]={0};
    sieve_prime(arr);
	int csum[MAX]={0};
	for(ll i=1;i<MAX;i++){
		csum[i]=csum[i-1]+arr[i];
	}
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<csum[b]-csum[a-1]<<endl;
	}
    
    return 0;
}
/*
Sample Input
2
1 10
11 20
Sample Output
4
4

question link: https://hack.codingblocks.com/app/practice/1/1039/problem

*/
