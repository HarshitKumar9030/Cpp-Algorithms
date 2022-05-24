/*
Example:
Input:
2
9 5
1 3 5 5 5 5 67 123 125
9 7
1 3 5 5 5 5 7 123 125

Output:
2 5
6 6
*/

#include<bits/stdc++.h>
using namespace std;
int first_indx(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e)
    {
    int mid=(s+e)/2;
    if(arr[mid]==key){
        ans=mid;
        e=mid-1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
  }
  return ans;
  
}
int last_indx(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e)
    {
    int mid=(s+e)/2;
    if(arr[mid]==key){
        ans=mid;
        s=mid+1;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
  }
  return ans;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int key;
	    cin>>key;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    if(first_indx(arr,n,key)>-1)
	    cout<<first_indx(arr,n,key)<<" "<<last_indx(arr,n,key)<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
