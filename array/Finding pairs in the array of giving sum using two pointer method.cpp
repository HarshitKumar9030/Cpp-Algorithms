#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int key;
    cin>>key;
    int i=0;
    int j=n-1;
    int currSum=0;
    while(i<j)
    {
        currSum=arr[i]+arr[j];
        if(currSum==key)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(currSum>key)
        j--;
        else if(currSum<key)
        i++;
    }

return 0;

}
