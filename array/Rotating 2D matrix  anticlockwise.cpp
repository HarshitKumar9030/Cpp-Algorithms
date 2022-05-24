#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n][n];
	    //matrix
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	            cin>>arr[i][j];
	    }
	    //reversing the row
	    for(int i=0;i<n;i++)
	        reverse(arr[i],arr[i]+n);
	        
	        
	   //swaping the elemets from theabove and below the diagonal
	   for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	            {
	                if(i<j)
	                  swap(arr[i][j],arr[j][i]);
	            }
	    }
	   for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	            {
	                cout<<arr[i][j]<<" ";
	            }
	    }
	    cout<<endl;
	}
	return 0;
}
