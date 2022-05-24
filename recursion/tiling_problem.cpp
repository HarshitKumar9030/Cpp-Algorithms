#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int count[n+1];
        count[0]=0;

        for(int i = 1; i<= n; i++){
            if(i==1 or i<m)
            count[i]=1;
            else if(i==m)
            count[i]=2;
            else if(i>m)
            count[i]=(count[i-1]+count[i-m])%1000000007;
        }
        cout<<count[n]%1000000007;
    }   

    return 0;
}
//Count the number of ways to tile the floor of size n x m using 1 x m size tiles 
//https://practice.geeksforgeeks.org/problems/count-the-number-of-ways-to-tile-the-floor-of-size-n-x-m-using-1-x-m-size-tiles/0

/*
Constraints:

1<= T <=100

1<= N, M <=10000


Example:

Input:

2

2 3

4 4

Output:

1
2
*/

/********************************Explanation********************
In this problem there are 3 cases:
case-1: 
for m==1
total number of ways is --> 1

case-2: 
for m===n
total number of ways is---> 2

case-3
for n>m
total number of ways is (n-1 + n-m)
*******************************End****************************/

