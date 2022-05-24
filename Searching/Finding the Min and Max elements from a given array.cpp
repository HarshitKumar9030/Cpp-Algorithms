#include <iostream>
#include<climits>
using namespace std;
int main() {
    int arr[10];
    int i=0;
    for(i=0;i<10;i++)
    cin>>arr[i];

    int l=INT_MIN;
    int s=INT_MAX;

    for(int i=0;i<10;i++)
    {
        l=max(l,arr[i]);
        s=min(s,arr[i]);
    }

    cout<<"Large: "<<l<<endl;
    cout<<"Small: "<<s<<endl;
    return 0;
}
