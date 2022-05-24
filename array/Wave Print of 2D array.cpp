#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int x=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=x;
            x++;
        }
    }
    for(int i=0;i<n;i++)
    {
        //if col is even then top to down
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            cout<<arr[j][i]<<" ";
        }
        //if col is odd thn down to top
        else
        {
            for(int j=n-1;j>=0;j--)
            cout<<arr[j][i]<<" ";
        }
        
        
    }
    
    return 0;
}
