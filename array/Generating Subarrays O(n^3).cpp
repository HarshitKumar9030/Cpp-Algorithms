#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //finding the subarray of the array in O(n^3)
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"{ ";
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<"}  ";
        }
        cout<<""<<endl;
    }

    return 0;
}
