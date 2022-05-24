#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) //will take input of the array
        cin>>arr[i];

        int maxSum=0,currSum=0;
        for(int i=0;i<n;i++)
        {
            currSum+=arr[i];
            if(currSum<0)
            currSum=0;
            maxSum=max(currSum,maxSum);
        }    
    cout<<maxSum<<endl;
    return 0;
}
