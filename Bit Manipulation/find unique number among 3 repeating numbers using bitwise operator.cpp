#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[64]={0};
	for(int i=0;i<n;i++)
	{
		int j=0;
		int n;
		cin>>n;
		while(n>0){
			arr[j]+=(n&1);
			n=n>>1;
			j++;
		}
	}
	int x=0,p=0;
	for(int i=0;i<64;i++){
		arr[i]%=3;
		//cout<<arr[i]<<" ";
		x+=arr[i]*pow(2,i);
	}
	
	cout<<x<<endl;
	return 0;
}

/*
Sample Input
7
1 1 1 2 2 2 3
Sample Output
3
*/
