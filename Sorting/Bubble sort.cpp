#include <iostream>
using namespace std;

void Bubble_sort(int *arr,int n)
{
    int i=0,j=0;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                 swap(arr[j],arr[j+1]);
        }
    }
}

int main() {
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
   Bubble_sort(arr,n); //function called
   for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
