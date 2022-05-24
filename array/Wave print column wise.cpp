#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
          cin>>arr[i][j];
    }
    int td=0,dt=1,exp=0;
    while(exp!=n){
        for(int i=0;i<m;i++){
        cout<<arr[i][td]<<", ";
        }
        exp++;
        if(exp==n)
        break;
        td+=2;
        for(int i=m-1;i>=0;i--){
        cout<<arr[i][dt]<<", ";
        }
        exp++;
        dt+=2;
         if(exp==n)
            break;
    }
    cout<<"END"<<endl;
    return 0;
}
