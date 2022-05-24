#include <iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

//Selection Sort Function
void Selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min_index])
            min_index=j;
        }
        swap(arr[min_index],arr[i]);
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main() {
    int arr[10];
    int i=0;
    for(i=0;i<10;i++)
    cin>>arr[i];
   Selection_sort(arr,10); //function called
    return 0;
}
