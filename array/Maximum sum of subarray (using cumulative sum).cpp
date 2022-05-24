#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n],cumSum[n];
    cin>>arr[0];
    cumSum[0]=arr[0];
    for(int i=1;i<n;i++) //will take input of the array and will generate the cumulative array
    {
        cin>>arr[i];
        cumSum[i]=cumSum[i-1]+arr[i];
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    for(int i=0;i<n;i++)
    cout<<cumSum[i]<<" ";
    cout<<endl;
    //generating the subarray
    int currSum=0,maxSum=-1,l=-1,r=-1;
    for(int i=0;i<n;i++)
    {
        currSum=0;
        for(int j=i;j<n;j++)
        {
            currSum=cumSum[j]-cumSum[i-1];
            if(currSum>maxSum)
            {
                maxSum=currSum;
                l=i;
                r=j;
            }
        }  
    }
    cout<<maxSum<<endl;
    for(int i=l;i<=r;i++)
         cout<<arr[i]<<" ";
         cout<<endl;
    //for(int i=l;i<=r;i++)
    //     cout<<cumSum[i]<<" ";
    return 0;
}
