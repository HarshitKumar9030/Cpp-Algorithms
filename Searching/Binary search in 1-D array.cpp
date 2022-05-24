#include <iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

//Binary search Function
int binary_search(int arr[],int n,int key)
{
    int s=0,e=n-1;
    while(s<e)
    {
    int mid=(s+e)/2;
    if(arr[mid]==key)
    return 1;
    else if(arr[mid]>key)
        e=mid-1;
    else
        s=mid+1;
    }
    return 0;
}
int main() {
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n); //in case the elemets inserted unsorted
    int key; //key to be searched
    cin>>key;
    binary_search(arr,n,key)?cout<<"Found ":cout<<"Not Found"<<endl; //function called
    return 0;
}
