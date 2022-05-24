#include <iostream>
#include<algorithm>
using namespace std;
// bool compare(int a,int b){
// return a<=b;
// }
int main() {
//lndian Money Change
int coins[]={1,2,5,10,20,50,100,200,500,2000};
int n =sizeof(coins)/sizeof(int);
int money ;
//enter the amount to be change
cin>>money;
//cout<<coins[lb];
int m=0;
 while(money>0){
     int lb=upper_bound(coins,coins+n,money)-coins-1; //we use (lower bound-1) index to get the amount slightly greater then the given amount
       m=money-coins[lb];
       cout<<coins[lb]<<" ";
       money=m;
 }

return 0;
}

